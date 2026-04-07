/*
 * XREFs of ?SetText@CDWriteText@@UEAAJPEBG@Z @ 0x180062F10
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@Z @ 0x180062FF8 (--$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@-$basic_string@GU-$char_trai.c)
 *     memmove_0 @ 0x1800EB124 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDWriteText::SetText(CDWriteText *this, const unsigned __int16 *a2)
{
  unsigned __int64 v4; // rdx
  char *v5; // rdi
  __int64 v6; // rax
  unsigned __int64 *v7; // r11
  __int64 v8; // r8
  char *v9; // r10
  const unsigned __int16 *v10; // rcx
  __int64 v11; // r10
  __int64 v12; // rbx

  if ( a2 )
  {
    v4 = -1LL;
    v5 = (char *)this + 24;
    v6 = -1LL;
    do
      ++v6;
    while ( a2[v6] );
    v7 = (unsigned __int64 *)((char *)this + 40);
    v8 = *((_QWORD *)this + 5);
    v9 = (char *)this + 24;
    if ( *((_QWORD *)this + 6) > 7uLL )
      v9 = *(char **)v5;
    if ( v8 == v6 )
    {
      v10 = a2;
      v11 = v9 - (char *)a2;
      while ( v8 )
      {
        if ( *(const unsigned __int16 *)((char *)v10 + v11) != *v10 )
          goto LABEL_14;
        --v8;
        ++v10;
      }
    }
    else
    {
      do
LABEL_14:
        ++v4;
      while ( a2[v4] );
      if ( v4 > *((_QWORD *)v5 + 3) )
      {
        std::wstring::_Reallocate_for<_lambda_05cef1f6fdf474c9f3ed207deba0f73b_,unsigned short const *>(v5);
      }
      else
      {
        if ( *((_QWORD *)v5 + 3) > 7uLL )
          v5 = *(char **)v5;
        v12 = 2 * v4;
        *v7 = v4;
        memmove_0(v5, a2, 2 * v4);
        *(_WORD *)&v5[v12] = 0;
      }
      (*(void (__fastcall **)(char *, __int64))(*((_QWORD *)this - 21) + 24LL))((char *)this - 168, 4096LL);
    }
  }
  return 0LL;
}
