/*
 * XREFs of IoCreateStreamFileObjectEx2 @ 0x14091ABD0
 * Callers:
 *     IoCreateStreamFileObjectEx @ 0x140919500 (IoCreateStreamFileObjectEx.c)
 *     IoCreateStreamFileObject @ 0x1409199C0 (IoCreateStreamFileObject.c)
 *     IoCreateStreamFileObjectLite @ 0x14091AB80 (IoCreateStreamFileObjectLite.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     RtlRaiseStatus @ 0x1402CA4E0 (RtlRaiseStatus.c)
 *     IopIncrementDeviceObjectRefCount @ 0x1402F84A0 (IopIncrementDeviceObjectRefCount.c)
 *     IopDecrementDeviceObjectRef @ 0x1402FD820 (IopDecrementDeviceObjectRef.c)
 *     IopIncrementVpbRefCount @ 0x140442B40 (IopIncrementVpbRefCount.c)
 *     IopGetSetSpecificExtension @ 0x14044D490 (IopGetSetSpecificExtension.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ObInsertObjectEx @ 0x140906FA0 (ObInsertObjectEx.c)
 *     ObCloseHandle @ 0x14091D2C0 (ObCloseHandle.c)
 *     ObCreateObjectEx @ 0x14092D760 (ObCreateObjectEx.c)
 */

__int64 __fastcall IoCreateStreamFileObjectEx2(__int64 a1, __int64 a2, __int64 a3, PVOID *a4, HANDLE *a5)
{
  HANDLE *v5; // r14
  __int16 v6; // bx
  ULONG_PTR v8; // rsi
  __int64 v10; // r9
  NTSTATUS SetSpecificExtension; // r15d
  _QWORD *v12; // rax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r8
  _GENERAL_LOOKASIDE *P; // rcx
  _SLIST_ENTRY *v16; // rdx
  ULONG_PTR v17; // rcx
  PVOID v18; // rcx
  _DWORD v19[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v20; // [rsp+58h] [rbp-28h]
  __int64 v21; // [rsp+60h] [rbp-20h]
  int v22; // [rsp+68h] [rbp-18h]
  int v23; // [rsp+6Ch] [rbp-14h]
  __int128 v24; // [rsp+70h] [rbp-10h]
  PVOID Object; // [rsp+C0h] [rbp+40h] BYREF
  HANDLE Handle; // [rsp+D8h] [rbp+58h] BYREF

  v5 = a5;
  v6 = *(_WORD *)(a1 + 2) & 2;
  Object = 0LL;
  v19[1] = 0;
  v8 = a3;
  v23 = 0;
  Handle = 0LL;
  *a4 = 0LL;
  if ( v5 )
    *v5 = 0LL;
  if ( *(_WORD *)a1 == 16 )
  {
    if ( v6 && v5 )
    {
      if ( (*(_BYTE *)(a1 + 2) & 1) == 0 )
        return 3221225485LL;
    }
    else
    {
      if ( a2 )
      {
        v8 = *(_QWORD *)(a2 + 8);
LABEL_8:
        LOBYTE(a2) = 1;
        IopIncrementDeviceObjectRefCount(v8, a2, a3);
        v19[0] = 48;
        v20 = 0LL;
        v22 = 512;
        v21 = 0LL;
        v24 = 0LL;
        LOWORD(a5) = 1;
        SetSpecificExtension = ObCreateObjectEx(0, (_DWORD)IoFileObjectType, (unsigned int)v19, 0);
        if ( SetSpecificExtension < 0 )
        {
          IopDecrementDeviceObjectRef(v8, 0LL, 0LL, v10);
          if ( (*(_BYTE *)(a1 + 2) & 1) != 0 )
            RtlRaiseStatus(SetSpecificExtension);
          return (unsigned int)SetSpecificExtension;
        }
        memset_0(Object, 0, 0xD8uLL);
        *(_WORD *)Object = 5;
        *((_WORD *)Object + 1) = 216;
        *((_QWORD *)Object + 1) = v8;
        *((_DWORD *)Object + 20) = 256;
        KeInitializeEvent((PRKEVENT)((char *)Object + 152), SynchronizationEvent, 0);
        *((_QWORD *)Object + 23) = 0LL;
        v12 = (char *)Object + 192;
        *((_QWORD *)Object + 25) = (char *)Object + 192;
        *v12 = v12;
        if ( v6 )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          P = CurrentPrcb->PPLookasideList[4].P;
          v16 = (_SLIST_ENTRY *)*((_QWORD *)Object - 2);
          ++P->TotalFrees;
          if ( LOWORD(P->ListHead.Alignment) < P->Depth
            || (++P->FreeMisses,
                P = CurrentPrcb->PPLookasideList[4].L,
                ++P->TotalFrees,
                LOWORD(P->ListHead.Alignment) < P->Depth) )
          {
            RtlpInterlockedPushEntrySList(&P->ListHead, v16);
          }
          else
          {
            ++P->FreeMisses;
            guard_dispatch_icall_no_overrides((__int64)v16, (__int64)v16);
          }
          *((_QWORD *)Object - 2) = 0LL;
        }
        else
        {
          result = ObInsertObjectEx((char *)Object, 0LL, 1, 1, 0, (__int64)&Object, &Handle);
          SetSpecificExtension = result;
          if ( (int)result < 0 )
          {
            if ( (*(_BYTE *)(a1 + 2) & 1) != 0 )
              RtlRaiseStatus(result);
            return result;
          }
        }
        *((_DWORD *)Object + 20) |= 0x40000u;
        v17 = *(_QWORD *)(v8 + 56);
        if ( v17 )
          IopIncrementVpbRefCount(v17, 1);
        if ( !v6 )
        {
          if ( v5 )
          {
            v18 = Object;
            *v5 = Handle;
            ObfDereferenceObject(v18);
          }
          else
          {
            ObCloseHandle(Handle, 0);
          }
        }
        if ( *(_QWORD *)(a1 + 8) )
        {
          a5 = 0LL;
          SetSpecificExtension = IopGetSetSpecificExtension((__int64)Object, 1, 32LL, 1, (__int64 *)&a5, 0LL);
          if ( SetSpecificExtension < 0 )
          {
            if ( v5 )
            {
              ObCloseHandle(*v5, 0);
              *v5 = 0LL;
            }
            else
            {
              ObfDereferenceObject(Object);
            }
            if ( (*(_BYTE *)(a1 + 2) & 1) != 0 )
              RtlRaiseStatus(SetSpecificExtension);
            return (unsigned int)SetSpecificExtension;
          }
          *a5 = *(HANDLE *)(a1 + 8);
        }
        *a4 = Object;
        return (unsigned int)SetSpecificExtension;
      }
      if ( a3 )
        goto LABEL_8;
      if ( (*(_BYTE *)(a1 + 2) & 1) == 0 )
        return 3221225485LL;
    }
    RtlRaiseStatus(-1073741811);
  }
  if ( (*(_BYTE *)(a1 + 2) & 1) != 0 )
    RtlRaiseStatus(-1073741637);
  return 3221225659LL;
}
