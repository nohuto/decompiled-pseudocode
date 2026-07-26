/*
 * XREFs of netsetupIsImpliedProperty @ 0x14015FFB0
 * Callers:
 *     ?ReadGuid@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAU_GUID@@@Z @ 0x14014AB7C (-ReadGuid@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAU_GUID@@@Z.c)
 *     ?ReadStringArray@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV?$KArray@V?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@$00@Rtl@@@Z @ 0x14014AC28 (-ReadStringArray@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV-$KArray@V-$unique_ptr@UKSt.c)
 *     ?ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x14015F700 (-ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV-$unique_ptr@UKString@Rtl@@U-$de.c)
 *     ?ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z @ 0x14015FCA0 (-ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z.c)
 *     ?ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z @ 0x14015FEF0 (-ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z.c)
 *     ?ReadUint64@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_K@Z @ 0x1401601E0 (-ReadUint64@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_K@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall netsetupIsImpliedProperty(__int64 a1)
{
  _QWORD *i; // rax
  __int64 v3; // rdx

  for ( i = &unk_1400F7FA0; ; i = (_QWORD *)((char *)i + 20) )
  {
    if ( i == (_QWORD *)&unk_1400F87FC )
      return 0;
    if ( *((_DWORD *)i + 4) == *(_DWORD *)(a1 + 16) )
    {
      v3 = *i - *(_QWORD *)a1;
      if ( *i == *(_QWORD *)a1 )
        v3 = i[1] - *(_QWORD *)(a1 + 8);
      if ( !v3 )
        break;
    }
  }
  return 1;
}
