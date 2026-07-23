/*
 * XREFs of HalpIommuConfigureInterrupt @ 0x14058E40C
 * Callers:
 *     HalpIommuInitializeAll @ 0x140C1378C (HalpIommuInitializeAll.c)
 * Callees:
 *     KeFindFirstSetRightGroupAffinity @ 0x1402F6E90 (KeFindFirstSetRightGroupAffinity.c)
 *     HalpInterruptIsMsiSupported @ 0x14050FAA4 (HalpInterruptIsMsiSupported.c)
 *     HalpInterruptGenerateMessage @ 0x14057E07C (HalpInterruptGenerateMessage.c)
 *     HalpInterruptRemap @ 0x14057E274 (HalpInterruptRemap.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     HalpIommuSetupMessageInterruptRouting @ 0x140BF1C10 (HalpIommuSetupMessageInterruptRouting.c)
 */

__int64 __fastcall HalpIommuConfigureInterrupt(__int64 a1, int a2, unsigned __int64 *a3)
{
  __int128 v6; // xmm0
  int Message; // ebx
  int v8; // eax
  __int64 result; // rax
  unsigned int v10; // edx
  unsigned int v11; // ecx
  __int64 v12; // [rsp+30h] [rbp-69h] BYREF
  int FirstSetRightGroupAffinity; // [rsp+38h] [rbp-61h]
  int v14; // [rsp+3Ch] [rbp-5Dh]
  __int128 *v15; // [rsp+40h] [rbp-59h]
  __int128 v16; // [rsp+48h] [rbp-51h] BYREF
  unsigned int v17[2]; // [rsp+60h] [rbp-39h] BYREF
  char v18; // [rsp+68h] [rbp-31h]
  int v19; // [rsp+6Ch] [rbp-2Dh]
  int v20; // [rsp+70h] [rbp-29h]
  __int128 v21; // [rsp+78h] [rbp-21h]
  unsigned int v22; // [rsp+88h] [rbp-11h]
  int v23; // [rsp+8Ch] [rbp-Dh]
  int v24; // [rsp+90h] [rbp-9h]
  unsigned int v25; // [rsp+94h] [rbp-5h]

  v12 = 6LL;
  v14 = 0;
  v16 = 0LL;
  memset_0(v17, 0, 0x58uLL);
  v6 = *(_OWORD *)a3;
  v17[1] = 206;
  v18 = 12;
  v22 = a2 & 0x3FFFFFFF | v22 & 0xC0000000 | 0x40000000;
  v21 = v6;
  FirstSetRightGroupAffinity = KeFindFirstSetRightGroupAffinity(a3);
  v15 = &v16;
  Message = -1073741637;
  LODWORD(v16) = a2 & 0x3FFFFFFF;
  if ( (*(_DWORD *)(a1 + 464) & 2) == 0 || !HalpInterruptIsMsiSupported(1) )
    return (unsigned int)Message;
  v8 = *(_DWORD *)(a1 + 384);
  if ( (v8 & 1) != 0 )
  {
    if ( (v8 & 2) == 0 )
      return (unsigned int)Message;
  }
  else
  {
    if ( a2 == 1073741822 )
    {
      Message = HalpInterruptGenerateMessage((__int64)&v12, (__int64)v17, (_QWORD *)(a1 + 488), (_QWORD *)(a1 + 496));
      if ( Message < 0 )
        return (unsigned int)Message;
    }
    else
    {
      v10 = *(_DWORD *)(a1 + 480);
      v11 = *(_DWORD *)(a1 + 476);
      v17[0] = 3;
      v20 = 1;
      v19 = 0;
      Message = HalpInterruptRemap(v11, v10, 0LL, 0, v17, 1u);
      if ( Message < 0 )
        return (unsigned int)Message;
      *(_DWORD *)(a1 + 492) = v23;
      *(_DWORD *)(a1 + 488) = v24;
      *(_QWORD *)(a1 + 496) = v25;
    }
    *(_DWORD *)(a1 + 384) |= 1u;
  }
  result = HalpIommuSetupMessageInterruptRouting(a1);
  if ( (int)result >= 0 )
    *(_DWORD *)(a1 + 384) |= 2u;
  return result;
}
