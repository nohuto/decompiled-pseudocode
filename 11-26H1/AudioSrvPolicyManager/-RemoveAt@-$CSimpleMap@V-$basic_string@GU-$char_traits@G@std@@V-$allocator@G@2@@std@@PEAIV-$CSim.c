/*
 * XREFs of ?RemoveAt@?$CSimpleMap@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAIV?$CSimpleMapEqualHelper@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAI@ATL@@@ATL@@QEAAHH@Z @ 0x180006318
 * Callers:
 *     ??1CProcess@@MEAA@XZ @ 0x18001ADE4 (--1CProcess@@MEAA@XZ.c)
 * Callees:
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180006440 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ?memmove_s@Checked@ATL@@YAXPEAX_KPEBX1@Z @ 0x18001E104 (-memmove_s@Checked@ATL@@YAXPEAX_KPEBX1@Z.c)
 */

__int64 __fastcall ATL::CSimpleMap<std::wstring,unsigned int *,ATL::CSimpleMapEqualHelper<std::wstring,unsigned int *>>::RemoveAt(
        ATL::Checked **a1)
{
  int *v1; // rsi
  __int64 v3; // rax
  ATL::Checked **v4; // r14
  ATL::Checked **v5; // rbx
  __int64 v6; // rax
  ATL::Checked **v7; // rbp
  __int64 v8; // rax
  ATL::Checked **v9; // rcx
  unsigned __int64 v11; // [rsp+20h] [rbp-8h]
  unsigned __int64 v12; // [rsp+20h] [rbp-8h]

  v1 = (int *)(a1 + 2);
  if ( *((int *)a1 + 4) <= 0 )
    return 0LL;
  std::wstring::~wstring(*a1);
  v3 = *v1;
  v4 = a1 + 1;
  if ( (_DWORD)v3 == 1 )
  {
    v5 = (ATL::Checked **)v1;
  }
  else
  {
    ATL::Checked::memmove_s(
      *a1,
      (void *)(32 * v3),
      (unsigned __int64)*a1 + 32,
      (const void *)(32LL * ((int)v3 - 1)),
      v11);
    ATL::Checked::memmove_s(*v4, (void *)(8LL * *v1), (unsigned __int64)*v4 + 8, (const void *)(8LL * (*v1 - 1)), v12);
    v5 = a1 + 2;
  }
  v6 = _o__recalloc(*a1, *v1 - 1, 32LL);
  v7 = v5;
  if ( !v6 )
  {
    if ( *v1 != 1 )
      goto LABEL_9;
    v7 = a1 + 2;
  }
  *a1 = (ATL::Checked *)v6;
LABEL_9:
  v8 = _o__recalloc(*v4, *v1 - 1, 8LL);
  v9 = v5;
  if ( v8 || (v9 = v7, *(_DWORD *)v5 == 1) )
  {
    *v4 = (ATL::Checked *)v8;
    v5 = v9;
  }
  --*(_DWORD *)v5;
  return 1LL;
}
