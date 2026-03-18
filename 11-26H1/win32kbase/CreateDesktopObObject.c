/*
 * XREFs of CreateDesktopObObject @ 0x140174B90
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall CreateDesktopObObject(__int64 a1, void *a2, __int64 a3, void **a4)
{
  void **v5; // rsi
  __int64 result; // rax
  _QWORD *v8; // rdi
  __int64 v9; // rcx
  NTSTATUS ObjectSecurity; // ebx
  void **v11; // [rsp+40h] [rbp-40h]
  _QWORD v12[4]; // [rsp+50h] [rbp-30h] BYREF
  __int128 v13; // [rsp+70h] [rbp-10h]
  unsigned __int8 MemoryAllocated; // [rsp+A0h] [rbp+20h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+B8h] [rbp+38h] BYREF

  v11 = a4;
  v5 = a4;
  *a4 = 0LL;
  LOBYTE(a4) = 1;
  v12[2] = a1;
  v12[0] = 48LL;
  v12[3] = 0LL;
  MemoryAllocated = 0;
  SecurityDescriptor = 0LL;
  v12[1] = 0LL;
  v13 = 0LL;
  result = ObCreateObject(0LL, ExDesktopObjectType, v12, a4, 0LL, 392, 0, 0, v11);
  if ( (int)result >= 0 )
  {
    v8 = *v5;
    memset(*v5, 0, 0x188uLL);
    v8[47] = v8 + 46;
    v8[46] = v8 + 46;
    *(_DWORD *)v8 = W32GetCurrentWin32kSessionId(v9);
    ObjectSecurity = ObGetObjectSecurity(a2, &SecurityDescriptor, &MemoryAllocated);
    if ( ObjectSecurity < 0
      || (ObjectSecurity = ObAssignSecurity(a3, SecurityDescriptor, v8, ExDesktopObjectType),
          ObReleaseObjectSecurity(SecurityDescriptor, MemoryAllocated),
          ObjectSecurity < 0) )
    {
      ObfDereferenceObject(v8);
      *v5 = 0LL;
    }
    return (unsigned int)ObjectSecurity;
  }
  return result;
}
