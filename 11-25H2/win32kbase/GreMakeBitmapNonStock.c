/*
 * XREFs of GreMakeBitmapNonStock @ 0x14006F4E0
 * Callers:
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x14001C2F0 (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 * Callees:
 *     HmgSetOwner @ 0x140015EC0 (HmgSetOwner.c)
 *     HmgLock @ 0x140018210 (HmgLock.c)
 *     ?InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ @ 0x14001BC00 (-InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ.c)
 *     ?bDIBSection@SURFACE@@QEAAHXZ @ 0x14006F5E0 (-bDIBSection@SURFACE@@QEAAHXZ.c)
 *     HmgLockAndModifyHandleType @ 0x14006F600 (HmgLockAndModifyHandleType.c)
 */

unsigned __int64 __fastcall GreMakeBitmapNonStock(__int64 a1)
{
  unsigned __int64 v1; // rdi
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rbp
  __int64 v6; // rcx

  v1 = 0LL;
  v3 = HmgLock(a1, 5);
  v5 = *(_QWORD *)(W32GetSessionState(v4) + 88);
  if ( v3 )
  {
    if ( (!(unsigned int)SURFACE::bDIBSection((SURFACE *)v3) || !*(_WORD *)(v3 + 100) && *(_DWORD *)(v3 + 216))
      && a1 != *(_QWORD *)(*(_QWORD *)(v5 + 3008) + 168LL)
      && (a1 & 0x800000) != 0 )
    {
      v1 = a1 & 0xFFFFFFFFFF7FFFFFuLL;
      if ( *(_DWORD *)(v3 + 168) )
      {
        if ( _bittest((const signed __int32 *)v3, 0x17u) )
          *(_WORD *)(v3 + 102) |= 0x400u;
      }
      else if ( (unsigned int)HmgLockAndModifyHandleType(v6, a1 & 0xFFFFFFFFFF7FFFFFuLL) )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v5 + 4244));
        *(_QWORD *)(v3 + 32) = v1;
        *(_WORD *)(v3 + 102) &= ~0x200u;
        HmgSetOwner(a1 & 0xFFFFFFFFFF7FFFFFuLL, -2147483646, 5);
      }
      else
      {
        v1 = 0LL;
      }
    }
    OBJECT::InterlockedDecrementExclusiveLockCount((OBJECT *)v3);
  }
  return v1;
}
