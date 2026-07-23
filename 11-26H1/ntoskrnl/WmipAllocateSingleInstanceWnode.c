/*
 * XREFs of WmipAllocateSingleInstanceWnode @ 0x140B28E30
 * Callers:
 *     IoWMISetSingleInstance @ 0x140828320 (IoWMISetSingleInstance.c)
 *     IoWMISetSingleItem @ 0x140828460 (IoWMISetSingleItem.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall WmipAllocateSingleInstanceWnode(
        unsigned int a1,
        unsigned __int16 *a2,
        unsigned int a3,
        unsigned int *a4,
        unsigned int *a5,
        unsigned int *a6,
        __int64 *a7)
{
  unsigned int v8; // esi
  unsigned int v9; // edi
  unsigned int v10; // ecx
  unsigned int v11; // ebx
  unsigned int v12; // ebx
  unsigned int v13; // ebp
  unsigned int v14; // ebx
  __int64 Pool2; // rcx

  v8 = -1073741670;
  if ( a1 + 1 >= a1 )
  {
    v9 = (a1 + 1) & 0xFFFFFFFE;
    v10 = *a2 + 2;
    if ( v10 <= ~v9 )
    {
      v11 = v9 + v10 + 7;
      if ( v11 >= v9 + v10 )
      {
        v12 = v11 & 0xFFFFFFF8;
        v13 = v12;
        if ( a3 <= ~v12 )
        {
          v14 = a3 + v12;
          Pool2 = ExAllocatePool2(0x40uLL);
          if ( Pool2 )
          {
            v8 = 0;
            *a4 = v9;
            *a5 = v13;
            *a6 = v14;
            *a7 = Pool2;
          }
        }
      }
    }
  }
  return v8;
}
