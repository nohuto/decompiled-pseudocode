/*
 * XREFs of RtlpCopyLegacyContextArm64 @ 0x180120058
 * Callers:
 *     RtlCopyContext @ 0x1800C0D00 (RtlCopyContext.c)
 *     RtlpCopyLegacyContext @ 0x1800C1260 (RtlpCopyLegacyContext.c)
 * Callees:
 *     Feature_Servicing_KernelArm64FpLrContextControl__private_IsEnabledNoReportingNoInline @ 0x18012035C (Feature_Servicing_KernelArm64FpLrContextControl__private_IsEnabledNoReportingNoInline.c)
 */

__int64 __fastcall RtlpCopyLegacyContextArm64(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int IsEnabledNoReportingNoInline; // edx
  int v8; // edx
  __int64 v9; // r9
  _OWORD *v10; // rcx
  __int64 v11; // r10
  _OWORD *v12; // rax
  __int128 v13; // xmm1
  _OWORD *v14; // rax
  _OWORD *v15; // rcx
  __int128 v16; // xmm1
  __int64 result; // rax

  IsEnabledNoReportingNoInline = Feature_Servicing_KernelArm64FpLrContextControl__private_IsEnabledNoReportingNoInline();
  *(_DWORD *)a2 = a3 & 0x67FFFFFF;
  if ( (a3 & 0x40000000) != 0 )
    *(_DWORD *)a2 = *(_DWORD *)a4 ^ (a3 ^ *(_DWORD *)a4) & 0x67FFFFFF;
  if ( (a3 & 0x400001) == 0x400001 )
  {
    *(_QWORD *)(a2 + 264) = *(_QWORD *)(a4 + 264);
    *(_QWORD *)(a2 + 256) = *(_QWORD *)(a4 + 256);
    *(_DWORD *)(a2 + 4) = *(_DWORD *)(a4 + 4);
    if ( IsEnabledNoReportingNoInline )
    {
      *(_QWORD *)(a2 + 240) = *(_QWORD *)(a4 + 240);
      *(_QWORD *)(a2 + 248) = *(_QWORD *)(a4 + 248);
    }
  }
  if ( (a3 & 0x400002) == 0x400002 )
  {
    *(_OWORD *)(a2 + 8) = *(_OWORD *)(a4 + 8);
    *(_OWORD *)(a2 + 24) = *(_OWORD *)(a4 + 24);
    *(_OWORD *)(a2 + 40) = *(_OWORD *)(a4 + 40);
    *(_OWORD *)(a2 + 56) = *(_OWORD *)(a4 + 56);
    *(_OWORD *)(a2 + 72) = *(_OWORD *)(a4 + 72);
    *(_OWORD *)(a2 + 88) = *(_OWORD *)(a4 + 88);
    *(_OWORD *)(a2 + 104) = *(_OWORD *)(a4 + 104);
    *(_OWORD *)(a2 + 120) = *(_OWORD *)(a4 + 120);
    *(_OWORD *)(a2 + 136) = *(_OWORD *)(a4 + 136);
    *(_OWORD *)(a2 + 160) = *(_OWORD *)(a4 + 160);
    *(_OWORD *)(a2 + 176) = *(_OWORD *)(a4 + 176);
    *(_OWORD *)(a2 + 192) = *(_OWORD *)(a4 + 192);
    *(_OWORD *)(a2 + 208) = *(_OWORD *)(a4 + 208);
    *(_OWORD *)(a2 + 224) = *(_OWORD *)(a4 + 224);
    if ( !IsEnabledNoReportingNoInline )
    {
      *(_QWORD *)(a2 + 240) = *(_QWORD *)(a4 + 240);
      *(_QWORD *)(a2 + 248) = *(_QWORD *)(a4 + 248);
    }
  }
  if ( (a3 & 0x400010) == 0x400010 )
    *(_QWORD *)(a2 + 152) = *(_QWORD *)(a4 + 152);
  v8 = a3 | 0x4000C0;
  v9 = 2LL;
  if ( (a3 & 0x400004) != 0x400004 )
    v8 = a3;
  if ( (v8 & 0x400040) == 0x400040 )
  {
    v10 = (_OWORD *)(a4 + 272);
    *(_DWORD *)(a2 + 784) = *(_DWORD *)(a4 + 784);
    v11 = 2LL;
    *(_DWORD *)(a2 + 788) = *(_DWORD *)(a4 + 788);
    v12 = (_OWORD *)(a2 + 272);
    do
    {
      *v12 = *v10;
      v12[1] = v10[1];
      v12[2] = v10[2];
      v12[3] = v10[3];
      v12[4] = v10[4];
      v12[5] = v10[5];
      v12[6] = v10[6];
      v12 += 8;
      v13 = v10[7];
      v10 += 8;
      *(v12 - 1) = v13;
      --v11;
    }
    while ( v11 );
  }
  if ( (v8 & 0x400080) == 0x400080 )
  {
    v14 = (_OWORD *)(a2 + 528);
    v15 = (_OWORD *)(a4 + 528);
    do
    {
      *v14 = *v15;
      v14[1] = v15[1];
      v14[2] = v15[2];
      v14[3] = v15[3];
      v14[4] = v15[4];
      v14[5] = v15[5];
      v14[6] = v15[6];
      v14 += 8;
      v16 = v15[7];
      v15 += 8;
      *(v14 - 1) = v16;
      --v9;
    }
    while ( v9 );
  }
  result = 4194312LL;
  if ( (v8 & 0x400008) == 0x400008 )
  {
    *(_OWORD *)(a2 + 824) = *(_OWORD *)(a4 + 824);
    *(_OWORD *)(a2 + 840) = *(_OWORD *)(a4 + 840);
    *(_OWORD *)(a2 + 856) = *(_OWORD *)(a4 + 856);
    *(_OWORD *)(a2 + 872) = *(_OWORD *)(a4 + 872);
    *(_OWORD *)(a2 + 792) = *(_OWORD *)(a4 + 792);
    *(_OWORD *)(a2 + 808) = *(_OWORD *)(a4 + 808);
    *(_OWORD *)(a2 + 896) = *(_OWORD *)(a4 + 896);
    result = *(_QWORD *)(a4 + 888);
    *(_QWORD *)(a2 + 888) = result;
  }
  return result;
}
