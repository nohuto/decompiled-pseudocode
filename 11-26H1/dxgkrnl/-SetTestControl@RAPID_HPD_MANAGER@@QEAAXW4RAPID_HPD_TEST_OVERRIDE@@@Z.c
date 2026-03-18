/*
 * XREFs of ?SetTestControl@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_TEST_OVERRIDE@@@Z @ 0x14007880C
 * Callers:
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x140439834 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ?CreateNewActivityId@RAPID_HPD_MANAGER@@AEAAXXZ @ 0x140047490 (-CreateNewActivityId@RAPID_HPD_MANAGER@@AEAAXXZ.c)
 */

__int64 __fastcall RAPID_HPD_MANAGER::SetTestControl(__int64 a1, int a2)
{
  __int64 result; // rax

  if ( a2 )
  {
    if ( a2 == 1 && *(_DWORD *)(a1 + 88) != 1 )
    {
      *(_QWORD *)(a1 + 56) = MEMORY[0xFFFFF78000000014];
      RAPID_HPD_MANAGER::CreateNewActivityId((RAPID_HPD_MANAGER *)a1);
      result = *(_QWORD *)(a1 + 56);
      *(_QWORD *)(a1 + 72) = result;
      *(_DWORD *)(a1 + 52) = 1;
      *(_DWORD *)(a1 + 80) = 4;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 52) = 0;
    *(_QWORD *)(a1 + 56) = 0LL;
    *(_OWORD *)(a1 + 36) = 0LL;
  }
  *(_DWORD *)(a1 + 88) = a2;
  return result;
}
