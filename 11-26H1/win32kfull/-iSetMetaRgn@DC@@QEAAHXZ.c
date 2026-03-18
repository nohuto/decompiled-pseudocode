/*
 * XREFs of ?iSetMetaRgn@DC@@QEAAHXZ @ 0x140213A68
 * Callers:
 *     NtGdiSetMetaRgn @ 0x140213A10 (NtGdiSetMetaRgn.c)
 * Callees:
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1400ADDB8 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 */

__int64 __fastcall DC::iSetMetaRgn(DC *this)
{
  Gre::Base *v2; // rcx
  __int64 v3; // rax
  __int64 result; // rax
  unsigned int v5; // edi
  Gre::Base *v6; // rcx
  __int64 v7; // rax
  struct Gre::Base::SESSION_GLOBALS *v8; // rax
  Gre::Base *v9; // [rsp+40h] [rbp+20h] BYREF
  __int64 v10; // [rsp+48h] [rbp+28h] BYREF
  __int64 v11; // [rsp+50h] [rbp+30h] BYREF

  v2 = (Gre::Base *)*((_QWORD *)this + 21);
  v3 = *((_QWORD *)this + 20);
  if ( v2 )
  {
    v9 = v2;
    if ( v3 )
    {
      v11 = v3;
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v10);
      if ( v10 )
      {
        v5 = RGNOBJ::iCombine((RGNOBJ *)&v10, (struct RGNOBJ *)&v9, (struct RGNOBJ *)&v11, 1);
        if ( v5 )
        {
          ++*(_DWORD *)(v10 + 76);
          *((_QWORD *)this + 21) = v10;
          --*((_DWORD *)v9 + 19);
          v6 = v9;
          if ( !*((_DWORD *)v9 + 19) )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v9);
          v7 = v11;
          *((_QWORD *)this + 20) = 0LL;
          --*(_DWORD *)(v7 + 76);
          if ( !*(_DWORD *)(v11 + 76) )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v11);
          v8 = Gre::Base::Globals(v6);
          DC::vReleaseRao(this, v8);
        }
        else
        {
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v10);
        }
        return v5;
      }
      else
      {
        return 0LL;
      }
    }
    else
    {
      return RGNOBJ::iComplexity((RGNOBJ *)&v9);
    }
  }
  else if ( v3 )
  {
    v9 = (Gre::Base *)*((_QWORD *)this + 20);
    result = RGNOBJ::iComplexity((RGNOBJ *)&v9);
    *((_QWORD *)this + 21) = *((_QWORD *)this + 20);
    *((_QWORD *)this + 20) = 0LL;
  }
  else
  {
    return 2LL;
  }
  return result;
}
