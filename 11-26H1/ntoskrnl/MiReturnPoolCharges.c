/*
 * XREFs of MiReturnPoolCharges @ 0x14036EFB8
 * Callers:
 *     MiReturnExcessPoolCharges @ 0x1403D1EA0 (MiReturnExcessPoolCharges.c)
 *     MiReturnPhysicalPoolPages @ 0x140520550 (MiReturnPhysicalPoolPages.c)
 * Callees:
 *     MiReturnCommit @ 0x14036F050 (MiReturnCommit.c)
 *     MiReturnResident @ 0x140370060 (MiReturnResident.c)
 *     MiReturnSystemCharges @ 0x1404AC8F8 (MiReturnSystemCharges.c)
 */

__int64 __fastcall MiReturnPoolCharges(_QWORD *a1, int a2, char a3)
{
  __int64 result; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // r11

  result = qword_140E3D9D8;
  if ( qword_140E3D9D8 )
  {
    v6 = a1[3] - a1[1];
    if ( a2 == 2 )
    {
      return MiReturnSystemCharges(&MiSystemPartition, v6, v6, (a3 & 1) != 0 ? 14 : 4);
    }
    else
    {
      MiReturnCommit(&MiSystemPartition, v6, 0LL);
      result = MiReturnResident(&MiSystemPartition, *a1);
      v7 = -a1[3];
      if ( a2 )
        _InterlockedAdd64((volatile signed __int64 *)&stru_140E366D8.Timer.Processor, v7);
      else
        _InterlockedAdd64((volatile signed __int64 *)&stru_140E366D8.Timer.Dpc, v7);
    }
  }
  return result;
}
