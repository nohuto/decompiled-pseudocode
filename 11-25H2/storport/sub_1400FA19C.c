/*
 * XREFs of sub_1400FA19C @ 0x1400FA19C
 * Callers:
 *     sub_1400F7E54 @ 0x1400F7E54 (sub_1400F7E54.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 */

__int64 __fastcall sub_1400FA19C(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rax
  __int64 v4; // rax

  v2 = 0;
  v3 = sub_1400143E0(64LL, 192LL, 1296982354LL, *(_QWORD *)(a1 + 8));
  *(_QWORD *)(a1 + 496) = v3;
  if ( v3 )
  {
    **(_QWORD **)(a1 + 496) = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(a1 + 8));
    v4 = *(_QWORD *)(a1 + 496);
    if ( *(_QWORD *)v4 )
    {
      *(_BYTE *)(v4 + 29) = 10;
    }
    else
    {
      v2 = -1073741670;
      if ( v4 )
      {
        ExFreePoolWithTag(*(PVOID *)(a1 + 496), 0x4D4E6152u);
        *(_QWORD *)(a1 + 496) = 0LL;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v2;
}
