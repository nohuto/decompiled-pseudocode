/*
 * XREFs of HMCleanupGrantedHandle @ 0x14018D960
 * Callers:
 *     ?HMDestroyUnlockedObjectWorkerAtomic@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1400D0E14 (-HMDestroyUnlockedObjectWorkerAtomic@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     HMFreeObject @ 0x1401187F0 (HMFreeObject.c)
 *     HMRemoveHandleForObject @ 0x1401BCC80 (HMRemoveHandleForObject.c)
 * Callees:
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

__int64 __fastcall HMCleanupGrantedHandle(__int64 a1, int a2, int a3)
{
  __int64 result; // rax
  __int64 *i; // rbx
  __int64 v6; // rdx
  unsigned int v7; // r8d
  _QWORD *v8; // rcx

  result = W32GetUserSessionState(a1, a2, a3);
  for ( i = *(__int64 **)(result + 69088); i; i = (__int64 *)*i )
  {
    v6 = 0LL;
    v7 = *((_DWORD *)i + 14);
    while ( (unsigned int)v6 < v7 )
    {
      v8 = (_QWORD *)(i[8] + 8 * v6);
      if ( *v8 == a1 )
      {
        result = (__int64)memmove(v8, v8 + 1, 8LL * (~(_DWORD)v6 + v7));
        --*((_DWORD *)i + 14);
        break;
      }
      v6 = (unsigned int)(v6 + 1);
    }
  }
  return result;
}
