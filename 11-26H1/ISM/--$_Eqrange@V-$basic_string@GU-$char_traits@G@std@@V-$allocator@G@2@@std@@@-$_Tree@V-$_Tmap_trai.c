/*
 * XREFs of ??$_Eqrange@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@KU?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@K@std@@@2@$0A@@std@@@std@@IEBA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@K@std@@PEAX@std@@PEAU12@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1800C7B04
 * Callers:
 *     ?OnMouseRemoval@HapticProcessor@@QEAAJPEBUDeviceInfo@@@Z @ 0x1800C9E30 (-OnMouseRemoval@HapticProcessor@@QEAAJPEBUDeviceInfo@@@Z.c)
 * Callees:
 *     ??$?MGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@0@Z @ 0x180023014 (--$-MGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA_NAEBV-$basic_string@GU-$char_traits@G@std@.c)
 */

__int64 *__fastcall std::_Tree<std::_Tmap_traits<std::wstring,unsigned long,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,unsigned long>>,0>>::_Eqrange<std::wstring>(
        __int64 *a1,
        __int64 *a2,
        const wchar_t *a3)
{
  __int64 v3; // rbp
  __int64 v7; // rdi
  __int64 i; // rbx
  __int64 j; // rbx
  __int64 *result; // rax

  v3 = *a1;
  v7 = *a1;
  for ( i = *(_QWORD *)(*a1 + 8); !*(_BYTE *)(i + 25); i = *(_QWORD *)i )
  {
    if ( (unsigned __int8)std::operator<<unsigned short>((const wchar_t *)(i + 32), a3) )
    {
      i += 16LL;
    }
    else
    {
      if ( *(_BYTE *)(v7 + 25) && (unsigned __int8)std::operator<<unsigned short>(a3, (const wchar_t *)(i + 32)) )
        v7 = i;
      v3 = i;
    }
  }
  if ( *(_BYTE *)(v7 + 25) )
    j = *a1 + 8;
  else
    j = v7;
LABEL_13:
  for ( j = *(_QWORD *)j; !*(_BYTE *)(j + 25); j = *(_QWORD *)(j + 16) )
  {
    if ( (unsigned __int8)std::operator<<unsigned short>(a3, (const wchar_t *)(j + 32)) )
    {
      v7 = j;
      goto LABEL_13;
    }
  }
  result = a2;
  *a2 = v3;
  a2[1] = v7;
  return result;
}
