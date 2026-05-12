/*
 * XREFs of sub_14001B0D0 @ 0x14001B0D0
 * Callers:
 *     sub_140019004 @ 0x140019004 (sub_140019004.c)
 *     sub_14001A620 @ 0x14001A620 (sub_14001A620.c)
 *     sub_14002D1F0 @ 0x14002D1F0 (sub_14002D1F0.c)
 *     sub_14005D584 @ 0x14005D584 (sub_14005D584.c)
 *     sub_14005D618 @ 0x14005D618 (sub_14005D618.c)
 *     sub_14008A0F4 @ 0x14008A0F4 (sub_14008A0F4.c)
 *     sub_1400CC36C @ 0x1400CC36C (sub_1400CC36C.c)
 *     sub_1400D2464 @ 0x1400D2464 (sub_1400D2464.c)
 *     sub_1400D35C8 @ 0x1400D35C8 (sub_1400D35C8.c)
 *     sub_1400D3B1C @ 0x1400D3B1C (sub_1400D3B1C.c)
 *     sub_140178370 @ 0x140178370 (sub_140178370.c)
 *     sub_140179B58 @ 0x140179B58 (sub_140179B58.c)
 *     sub_140179BF8 @ 0x140179BF8 (sub_140179BF8.c)
 *     sub_14017A040 @ 0x14017A040 (sub_14017A040.c)
 *     sub_14018AA98 @ 0x14018AA98 (sub_14018AA98.c)
 *     sub_140191538 @ 0x140191538 (sub_140191538.c)
 *     sub_1401915E0 @ 0x1401915E0 (sub_1401915E0.c)
 *     sub_140191680 @ 0x140191680 (sub_140191680.c)
 *     sub_1401929D8 @ 0x1401929D8 (sub_1401929D8.c)
 *     sub_1401942EC @ 0x1401942EC (sub_1401942EC.c)
 *     sub_1401B0538 @ 0x1401B0538 (sub_1401B0538.c)
 *     sub_1401B1224 @ 0x1401B1224 (sub_1401B1224.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall sub_14001B0D0(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                             + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  return IofCallDriver(a1, a2);
}
