/*
 * XREFs of RaidBusEnumeratorProcessModifiedNodes @ 0x14005CC38
 * Callers:
 *     RaidAdapterRescanBus @ 0x140036EE4 (RaidAdapterRescanBus.c)
 * Callees:
 *     RaidBusEnumeratorProcessNewUnit @ 0x140034E94 (RaidBusEnumeratorProcessNewUnit.c)
 *     McTemplateK0zqjqq_EtwWriteTransfer @ 0x14006FE80 (McTemplateK0zqjqq_EtwWriteTransfer.c)
 *     WPP_SF_qqddds @ 0x140070540 (WPP_SF_qqddds.c)
 *     RaidUnitNotifyHardwareGone @ 0x1400A8A48 (RaidUnitNotifyHardwareGone.c)
 */

__int64 __fastcall RaidBusEnumeratorProcessModifiedNodes(__int64 *a1, int a2, int a3)
{
  __int64 v3; // rdi
  __int64 *v4; // r12
  __int64 *v5; // rsi
  int v6; // ebp
  int v7; // r14d
  unsigned int v9; // r15d
  int v10; // eax
  const char *v11; // rcx
  int v12; // ecx

  v3 = *a1;
  v4 = a1 + 15;
  v5 = (__int64 *)a1[15];
  v6 = 0;
  v7 = 0;
  v9 = 0;
  while ( v5 != v4 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      v10 = *((_DWORD *)v5 + 18);
      if ( v10 )
      {
        if ( v10 == 1 )
        {
          v11 = "new";
        }
        else
        {
          v11 = "matched";
          if ( v10 != 2 )
            v11 = "invalid";
        }
      }
      else
      {
        v11 = "unmatched";
      }
      WPP_SF_qqddds(
        WPP_GLOBAL_Control->AttachedDevice,
        *((unsigned __int8 *)v5 - 11),
        *((unsigned __int8 *)v5 - 12),
        v3,
        *(v5 - 1),
        *((_BYTE *)v5 - 12),
        *((_BYTE *)v5 - 11),
        *((_BYTE *)v5 - 10),
        (__int64)v11);
    }
    v12 = *((_DWORD *)v5 + 18);
    if ( v12 )
    {
      if ( v12 == 1 )
      {
        RaidBusEnumeratorProcessNewUnit((__int64)a1, (__int64)(v5 - 2));
        ++v6;
        v9 = 1;
      }
    }
    else
    {
      v9 = (unsigned __int8)RaidUnitNotifyHardwareGone(*(v5 - 1));
      ++v7;
    }
    v5 = (__int64 *)*v5;
  }
  if ( *(_BYTE *)(v3 + 4434) && (v6 || v7) && (byte_140173446 & 1) != 0 )
    McTemplateK0zqjqq_EtwWriteTransfer(
      *(_DWORD *)(v3 + 56),
      a2,
      a3,
      *(_QWORD *)(v3 + 4784),
      *(_DWORD *)(v3 + 56),
      v3 + 5128,
      v6,
      v7);
  return v9;
}
