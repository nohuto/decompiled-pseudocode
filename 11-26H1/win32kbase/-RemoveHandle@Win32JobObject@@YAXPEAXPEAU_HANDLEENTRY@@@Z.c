/*
 * XREFs of ?RemoveHandle@Win32JobObject@@YAXPEAXPEAU_HANDLEENTRY@@@Z @ 0x1401CF4C4
 * Callers:
 *     ?HMDestroyUnlockedObjectWorkerAtomic@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1400D0E14 (-HMDestroyUnlockedObjectWorkerAtomic@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     HMFreeObject @ 0x1401187F0 (HMFreeObject.c)
 *     HMRemoveHandleForObject @ 0x1401BCC80 (HMRemoveHandleForObject.c)
 * Callees:
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

void __fastcall Win32JobObject::RemoveHandle(Win32JobObject *this, _BYTE *a2, struct _HANDLEENTRY *a3)
{
  __int64 *i; // rbx
  unsigned int v6; // edx
  __int64 v7; // rdi
  __int64 v8; // r14
  Win32JobObject **v9; // rcx
  unsigned int v10; // eax

  if ( (a2[25] & 0x20) != 0 )
  {
    for ( i = *(__int64 **)(W32GetUserSessionState((_DWORD)this, (_DWORD)a2, (_DWORD)a3) + 69088); i; i = (__int64 *)*i )
    {
      v6 = *((_DWORD *)i + 14);
      v7 = 0LL;
      v8 = i[8];
      if ( v6 )
      {
        do
        {
          v9 = (Win32JobObject **)(v8 + 8 * v7);
          v10 = v6;
          if ( *v9 == this )
          {
            memmove(v9, v9 + 1, 8LL * (v6 + ~(_DWORD)v7));
            v10 = --*((_DWORD *)i + 14);
          }
          v7 = (unsigned int)(v7 + 1);
          v6 = v10;
        }
        while ( (unsigned int)v7 < v10 );
      }
    }
    a2[25] &= ~0x20u;
  }
}
