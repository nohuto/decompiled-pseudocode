/*
 * XREFs of ?iSetMetaRgn@DC@@QEAAHXZ @ 0x1401D7BB8
 * Callers:
 *     NtGdiSetMetaRgn @ 0x1401D7B60 (NtGdiSetMetaRgn.c)
 * Callees:
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x14009AC08 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 */

__int64 __fastcall DC::iSetMetaRgn(DC *this)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 result; // rax
  __int64 v5; // rcx
  unsigned int v6; // edi
  __int64 v7; // rax
  __int64 v8; // [rsp+40h] [rbp+20h] BYREF
  __int64 v9; // [rsp+48h] [rbp+28h] BYREF
  __int64 v10; // [rsp+50h] [rbp+30h] BYREF

  v2 = *((_QWORD *)this + 21);
  v3 = *((_QWORD *)this + 20);
  if ( v2 )
  {
    v8 = v2;
    if ( v3 )
    {
      v10 = v3;
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v9);
      if ( v9 )
      {
        v6 = RGNOBJ::iCombine((RGNOBJ *)&v9, (struct RGNOBJ *)&v8, (struct RGNOBJ *)&v10, 1);
        if ( v6 )
        {
          ++*(_DWORD *)(v9 + 76);
          *((_QWORD *)this + 21) = v9;
          if ( !--*(_DWORD *)(v8 + 76) )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v8);
          v7 = v10;
          *((_QWORD *)this + 20) = 0LL;
          --*(_DWORD *)(v7 + 76);
          if ( !*(_DWORD *)(v10 + 76) )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v10);
          DC::vReleaseRao(this);
        }
        else
        {
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v9);
        }
        return v6;
      }
      else
      {
        return 0LL;
      }
    }
    else
    {
      return RGNOBJ::iComplexity((RGNOBJ *)&v8);
    }
  }
  else if ( v3 )
  {
    v8 = *((_QWORD *)this + 20);
    result = RGNOBJ::iComplexity((RGNOBJ *)&v8);
    v5 = *((_QWORD *)this + 20);
    *((_QWORD *)this + 20) = 0LL;
    *((_QWORD *)this + 21) = v5;
  }
  else
  {
    return 2LL;
  }
  return result;
}
