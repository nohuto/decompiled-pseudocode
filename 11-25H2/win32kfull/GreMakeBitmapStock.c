/*
 * XREFs of GreMakeBitmapStock @ 0x140176240
 * Callers:
 *     NtGdiSetBitmapAttributes @ 0x140176220 (NtGdiSetBitmapAttributes.c)
 * Callees:
 *     ?InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ @ 0x14008A7E0 (-InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ.c)
 *     ?bDIBSection@SURFACE@@QEAAHXZ @ 0x1401764E8 (-bDIBSection@SURFACE@@QEAAHXZ.c)
 */

__int64 __fastcall GreMakeBitmapStock(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  SURFACE *v4; // rax
  SURFACE *v5; // rbx
  SURFACE *v6; // rcx
  Gre::Base *v7; // rcx
  struct Gre::Base::SESSION_GLOBALS *v8; // rsi
  __int64 v9; // r8
  int v11; // eax

  LOBYTE(a2) = 5;
  v2 = 0LL;
  v4 = (SURFACE *)HmgLock(a1, a2);
  v5 = v4;
  if ( v4 )
  {
    if ( (!(unsigned int)SURFACE::bDIBSection(v4) || !*((_WORD *)v5 + 50) && *((_DWORD *)v5 + 54))
      && (a1 & 0x800000) == 0
      && !*((_DWORD *)v5 + 42) )
    {
      if ( (*((_DWORD *)v5 + 28) & 0x80000800) != 0 || SURFACE::GetFirstLSurf(v6) )
      {
        if ( !*((_DWORD *)v5 + 42) )
        {
          v11 = *((_DWORD *)v5 + 28);
          if ( (v11 & 0x800) == 0 && v11 >= 0 )
            SURFACE::GetFirstLSurf(v5);
        }
      }
      else
      {
        v2 = a1 | 0x800000;
        v8 = Gre::Base::Globals(v7);
        if ( _InterlockedDecrement((volatile signed __int32 *)v8 + 1061) >= 0
          && (unsigned int)HmgLockAndModifyHandleType(v5, v2) )
        {
          if ( (*(_DWORD *)v5 & 0x800000) != 0 )
            *((_WORD *)v5 + 51) |= 0x200u;
          LOBYTE(v9) = 5;
          *((_QWORD *)v5 + 4) = v2;
          HmgSetOwner(v2, 0LL, v9);
        }
        else
        {
          _InterlockedIncrement((volatile signed __int32 *)v8 + 1061);
          v2 = 0LL;
        }
      }
    }
    OBJECT::InterlockedDecrementExclusiveLockCount(v5);
  }
  return v2;
}
