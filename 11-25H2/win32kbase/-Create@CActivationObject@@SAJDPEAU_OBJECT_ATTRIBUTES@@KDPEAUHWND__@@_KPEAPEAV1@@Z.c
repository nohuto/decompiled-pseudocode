/*
 * XREFs of ?Create@CActivationObject@@SAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAUHWND__@@_KPEAPEAV1@@Z @ 0x1400E3D88
 * Callers:
 *     ?CreateActivationObject@CActivationObjectManager@@QEAAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAUHWND__@@_KPEAU_LUID@@@Z @ 0x1400E3C64 (-CreateActivationObject@CActivationObjectManager@@QEAAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAUHWND__@@_K.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140049A34 (W32GetCurrentWin32kSessionId.c)
 *     memset @ 0x140243000 (memset.c)
 */

NTSTATUS __fastcall CActivationObject::Create(
        __int64 a1,
        struct _OBJECT_ATTRIBUTES *a2,
        __int64 a3,
        __int64 a4,
        HWND a5,
        unsigned __int64 a6,
        struct CActivationObject **a7)
{
  struct CActivationObject **v7; // rbx
  NTSTATUS result; // eax
  __int64 v9; // rcx
  __int64 v10; // r9
  NTSTATUS inserted; // edx
  struct _LUID Luid; // [rsp+50h] [rbp-10h] BYREF
  PVOID Object; // [rsp+78h] [rbp+18h] BYREF

  v7 = a7;
  Object = 0LL;
  Luid = 0LL;
  *a7 = 0LL;
  result = ZwAllocateLocallyUniqueId(&Luid);
  if ( result >= 0 )
  {
    LOBYTE(v10) = 1;
    LOBYTE(v9) = 1;
    inserted = ObCreateObject(v9, ExActivationObjectType, 0LL, v10, 0LL, 80, 0, 0, &Object);
    if ( inserted >= 0 )
    {
      memset(Object, 0, 0x50uLL);
      *(_DWORD *)Object = W32GetCurrentWin32kSessionId();
      *((_QWORD *)Object + 3) = PsGetCurrentProcess();
      *((_QWORD *)Object + 4) = KeGetCurrentThread();
      inserted = ObInsertObject(Object, 0LL, 3u, 0, 0LL, 0LL);
      if ( inserted >= 0 )
      {
        *((_QWORD *)Object + 6) = a6;
        *((_QWORD *)Object + 9) = a5;
        *((struct _LUID *)Object + 5) = Luid;
        *((_DWORD *)Object + 14) = 1;
        *v7 = (struct CActivationObject *)Object;
      }
    }
    return inserted;
  }
  return result;
}
