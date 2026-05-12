/*
 * XREFs of sub_14006F5F4 @ 0x14006F5F4
 * Callers:
 *     DllUnload @ 0x1400A5240 (DllUnload.c)
 * Callees:
 *     <none>
 */

void sub_14006F5F4()
{
  PVOID *v0; // rbx
  __int64 v1; // rax

  while ( 1 )
  {
    v0 = *(PVOID **)&stru_1401692A0.SectorSize;
    if ( *(struct _DEVICE_OBJECT **)&stru_1401692A0.SectorSize == (struct _DEVICE_OBJECT *)&stru_1401692A0.SectorSize )
      break;
    if ( *(struct _DEVICE_OBJECT **)(*(_QWORD *)&stru_1401692A0.SectorSize + 8LL) != (struct _DEVICE_OBJECT *)&stru_1401692A0.SectorSize
      || (v1 = **(_QWORD **)&stru_1401692A0.SectorSize,
          *(_QWORD *)(**(_QWORD **)&stru_1401692A0.SectorSize + 8LL) != *(_QWORD *)&stru_1401692A0.SectorSize) )
    {
      __fastfail(3u);
    }
    *(_QWORD *)&stru_1401692A0.SectorSize = **(_QWORD **)&stru_1401692A0.SectorSize;
    *(_QWORD *)(v1 + 8) = &stru_1401692A0.SectorSize;
    ExFreePoolWithTag(v0[3], 0x48536152u);
    ExFreePoolWithTag(v0, 0x48536152u);
  }
}
