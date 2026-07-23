/*
 * XREFs of HvpMapHiveImageFromFile @ 0x140B535DC
 * Callers:
 *     HvLoadHive @ 0x140AC4740 (HvLoadHive.c)
 * Callees:
 *     HvpMapHiveImage @ 0x140863984 (HvpMapHiveImage.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HvpMapHiveImageFromFile(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, unsigned int a4)
{
  int v4; // eax
  __int64 v6; // rdx
  unsigned int v7; // r8d
  void *v8; // rcx
  unsigned int v9; // ebx
  unsigned int v10; // eax
  PVOID P; // [rsp+40h] [rbp-20h]
  unsigned int v13; // [rsp+48h] [rbp-18h]

  v4 = 0x200000;
  if ( a4 < 0x200000 )
    v4 = a4;
  v13 = v4;
  do
  {
    P = (PVOID)ExAllocatePool2(0x100uLL);
    v8 = P;
    if ( P )
      break;
    v13 = ((v13 >> 1) + 4095) & 0xFFFFF000;
  }
  while ( v13 >= 0x10000 );
  if ( P )
  {
    v10 = HvpMapHiveImage(BugCheckParameter2, v6, v7);
    v8 = P;
    v9 = v10;
  }
  else
  {
    v9 = -1073741801;
  }
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  return v9;
}
