/*
 * XREFs of ??4ViewOptions@@QEAAAEAU0@AEBU0@@Z @ 0x1801B0EC4
 * Callers:
 *     ?ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@PEBUViewOptions@@@Z @ 0x1800BAD08 (-ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@PEBUViewOptions@@@Z.c)
 * Callees:
 *     ??$_Copy_memmove_n@PEBURect@Foundation@Windows@winrt@@PEAU1234@@std@@YAPEAURect@Foundation@Windows@winrt@@PEBU1234@_KPEAU1234@@Z @ 0x1800BB94C (--$_Copy_memmove_n@PEBURect@Foundation@Windows@winrt@@PEAU1234@@std@@YAPEAURect@Foundation@Windo.c)
 *     ?_Clear_and_reserve_geometric@?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@AEAAX_K@Z @ 0x180285244 (-_Clear_and_reserve_geometric@-$vector@URect@Foundation@Windows@@V-$allocator@URect@Foundation@W.c)
 */

__int64 __fastcall ViewOptions::operator=(__int64 a1, __int64 a2)
{
  char **v2; // r14
  char *v4; // rbp
  char *v5; // rbx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rsi
  char *v8; // rcx

  *(_BYTE *)a1 = *(_BYTE *)a2;
  v2 = (char **)(a1 + 32);
  *(_BYTE *)(a1 + 1) = *(_BYTE *)(a2 + 1);
  *(_BYTE *)(a1 + 2) = *(_BYTE *)(a2 + 2);
  *(_BYTE *)(a1 + 3) = *(_BYTE *)(a2 + 3);
  *(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
  if ( a1 + 32 != a2 + 32 )
  {
    v4 = *(char **)(a2 + 32);
    v5 = *v2;
    v6 = (__int64)(*(_QWORD *)(a2 + 40) - (_QWORD)v4) >> 4;
    if ( v6 > (__int64)(*(_QWORD *)(a1 + 48) - *(_QWORD *)(a1 + 32)) >> 4 )
    {
      std::vector<Windows::Foundation::Rect>::_Clear_and_reserve_geometric(a1 + 32, v6);
      v5 = *v2;
    }
    else
    {
      v7 = (__int64)(*(_QWORD *)(a1 + 40) - (_QWORD)v5) >> 4;
      if ( v6 > v7 )
      {
        std::_Copy_memmove_n<winrt::Windows::Foundation::Rect const *,winrt::Windows::Foundation::Rect *>(
          v4,
          (__int64)(*(_QWORD *)(a1 + 40) - (_QWORD)v5) >> 4,
          *(void **)(a1 + 32));
        v5 = v2[1];
        v6 -= v7;
        v8 = &v4[16 * v7];
        goto LABEL_5;
      }
    }
    v8 = v4;
LABEL_5:
    std::_Copy_memmove_n<winrt::Windows::Foundation::Rect const *,winrt::Windows::Foundation::Rect *>(v8, v6, v5);
    v2[1] = &v5[16 * v6];
  }
  return a1;
}
