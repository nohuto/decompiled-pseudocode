/*
 * XREFs of ?RemoveObject@?$CGenericTable@IVCChannel@DirectComposition@@$0HEGDEDEE@$00@DirectComposition@@QEAAPEAVCChannel@2@I@Z @ 0x14010235C
 * Callers:
 *     ?DestroyHandle@CChannel@DirectComposition@@SAJI@Z @ 0x1401022D8 (-DestroyHandle@CChannel@DirectComposition@@SAJI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CGenericTable<unsigned int,DirectComposition::CChannel,1952662340,1>::RemoveObject(
        PRTL_GENERIC_TABLE Table,
        int a2)
{
  __int64 v3; // rbx
  _QWORD *v4; // rax
  _DWORD Buffer[2]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+28h] [rbp-10h]

  Buffer[0] = a2;
  Buffer[1] = 0;
  v7 = 0LL;
  v3 = 0LL;
  v4 = RtlLookupElementGenericTable(Table, Buffer);
  if ( v4 )
  {
    v3 = v4[1];
    RtlDeleteElementGenericTable(Table, v4);
  }
  return v3;
}
