/*
 * XREFs of WmipRegisterOrUpdateDS @ 0x140A0A9A4
 * Callers:
 *     WmipRegistrationWorker @ 0x140A0A880 (WmipRegistrationWorker.c)
 *     WmipRegisterDevice @ 0x140ACFB28 (WmipRegisterDevice.c)
 * Callees:
 *     WmipProcessWmiRegInfo @ 0x140A0AADC (WmipProcessWmiRegInfo.c)
 *     WmipSendWmiIrp @ 0x140A0D8E4 (WmipSendWmiIrp.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WmipRegisterOrUpdateDS(__int64 a1, char a2)
{
  unsigned int v2; // esi
  unsigned int v5; // ebp
  __int64 v6; // rcx
  unsigned int *Pool2; // rdi
  __int64 v8; // r9
  int v9; // eax
  __int64 v10; // rcx
  int v11; // ebx
  _BYTE v13[8]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v14; // [rsp+38h] [rbp-20h]

  v2 = 0;
  v14 = 0LL;
  v5 = 0x2000;
  while ( 1 )
  {
    Pool2 = (unsigned int *)ExAllocatePool2(0x40uLL);
    if ( !Pool2 )
      break;
    LOBYTE(v6) = 11;
    v9 = WmipSendWmiIrp(v6, *(unsigned int *)(a1 + 56), a2 != 0, v5, Pool2, v13);
    v11 = v9;
    if ( v9 < 0 )
    {
      if ( v9 == -1073741789 )
      {
LABEL_15:
        v2 = v14;
LABEL_16:
        v5 = *Pool2;
        ExFreePoolWithTag(Pool2, 0);
        v11 = -1073741789;
        goto LABEL_6;
      }
      LOBYTE(v10) = 8;
      v11 = WmipSendWmiIrp(v10, *(unsigned int *)(a1 + 56), a2 != 0, v5, Pool2, v13);
    }
    if ( v11 == -1073741789 )
      goto LABEL_15;
    v2 = v14;
    if ( v14 == 4 )
      goto LABEL_16;
LABEL_6:
    if ( v11 != -1073741789 )
      goto LABEL_7;
  }
  v11 = -1073741670;
LABEL_7:
  if ( v11 >= 0 )
  {
    LOBYTE(v8) = a2;
    v11 = WmipProcessWmiRegInfo(a1, Pool2, v2, v8);
  }
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)v11;
}
