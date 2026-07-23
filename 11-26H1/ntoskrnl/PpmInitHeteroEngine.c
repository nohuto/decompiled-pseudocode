/*
 * XREFs of PpmInitHeteroEngine @ 0x140CDA674
 * Callers:
 *     PoInitHeteroDetection @ 0x140CD4948 (PoInitHeteroDetection.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x140275D20 (KeQueryMaximumProcessorCountEx.c)
 *     Feature_WpsInitTableCollection__private_IsEnabledDeviceUsageNoInline @ 0x14060D3CC (Feature_WpsInitTableCollection__private_IsEnabledDeviceUsageNoInline.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 PpmInitHeteroEngine()
{
  void *v0; // rbp
  _QWORD *v1; // rdi
  void *v2; // r14
  ULONG_PTR v3; // r13
  void *v4; // r15
  void *v5; // r12
  ULONG MaximumProcessorCount; // eax
  ULONG_PTR v7; // rbx
  _QWORD *Pool2; // rsi
  unsigned int v9; // ebx
  int IsEnabledDeviceUsageNoInline; // eax
  void *v11; // rcx
  void *v12; // rcx
  int v13; // eax
  void *v14; // rcx
  void *v15; // rcx
  void *v16; // rcx
  void *v17; // rcx
  void *v18; // rcx
  void *v19; // rcx
  void *v20; // rcx
  void *v21; // rcx
  void *v22; // rcx
  void *v23; // rcx
  ULONG_PTR v25; // [rsp+68h] [rbp+10h]
  ULONG_PTR v26; // [rsp+70h] [rbp+18h]

  v0 = 0LL;
  v1 = 0LL;
  v2 = 0LL;
  v3 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  v7 = MaximumProcessorCount;
  v25 = 4 * (unsigned int)PpmHeteroWorkloadClasses * MaximumProcessorCount + 48;
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, (unsigned int)v25, 0x704D5050u);
  if ( !Pool2 )
    goto LABEL_2;
  v4 = (void *)ExAllocatePool2(64LL, v7, 0x704D5050u);
  if ( !v4 )
    goto LABEL_2;
  v26 = (unsigned int)(2 * PpmHeteroWorkloadClasses);
  v5 = (void *)ExAllocatePool2(64LL, v26, 0x704D5050u);
  if ( !v5 )
    goto LABEL_2;
  if ( !(unsigned int)Feature_WpsInitTableCollection__private_IsEnabledDeviceUsageNoInline() )
    goto LABEL_9;
  v2 = (void *)ExAllocatePool2(64LL, (unsigned int)(4 * v7), 0x704D5050u);
  if ( !v2 || (v0 = (void *)ExAllocatePool2(64LL, (unsigned int)(4 * v7), 0x704D5050u)) == 0LL )
  {
LABEL_2:
    v9 = -1073741670;
    goto LABEL_28;
  }
  v3 = (unsigned int)(4 * v7);
LABEL_9:
  Pool2[2] = v4;
  Pool2[3] = v5;
  *((_DWORD *)Pool2 + 1) = PpmHeteroWorkloadClasses;
  *(_DWORD *)Pool2 = v7;
  if ( (unsigned int)Feature_WpsInitTableCollection__private_IsEnabledDeviceUsageNoInline() )
  {
    *((_BYTE *)Pool2 + 8) = 0;
    Pool2[4] = v2;
    Pool2[5] = v0;
  }
  v4 = 0LL;
  IsEnabledDeviceUsageNoInline = Feature_WpsInitTableCollection__private_IsEnabledDeviceUsageNoInline();
  v11 = 0LL;
  if ( !IsEnabledDeviceUsageNoInline )
    v11 = v2;
  v2 = v11;
  v12 = 0LL;
  if ( !IsEnabledDeviceUsageNoInline )
    v12 = v0;
  v5 = 0LL;
  v0 = v12;
  v1 = (_QWORD *)ExAllocatePool2(64LL, v25, 0x704D5050u);
  if ( !v1 )
    goto LABEL_2;
  v4 = (void *)ExAllocatePool2(64LL, v7, 0x704D5050u);
  if ( !v4 )
    goto LABEL_2;
  v5 = (void *)ExAllocatePool2(64LL, v26, 0x704D5050u);
  if ( !v5 )
    goto LABEL_2;
  if ( (unsigned int)Feature_WpsInitTableCollection__private_IsEnabledDeviceUsageNoInline() )
  {
    v2 = (void *)ExAllocatePool2(64LL, v3, 0x704D5050u);
    if ( !v2 )
      goto LABEL_2;
    v0 = (void *)ExAllocatePool2(64LL, v3, 0x704D5050u);
    if ( !v0 )
      goto LABEL_2;
  }
  v1[2] = v4;
  v1[3] = v5;
  *((_DWORD *)v1 + 1) = PpmHeteroWorkloadClasses;
  *(_DWORD *)v1 = v7;
  if ( (unsigned int)Feature_WpsInitTableCollection__private_IsEnabledDeviceUsageNoInline() )
  {
    *((_BYTE *)v1 + 8) = 0;
    v1[4] = v2;
    v1[5] = v0;
  }
  v4 = 0LL;
  v5 = 0LL;
  v13 = Feature_WpsInitTableCollection__private_IsEnabledDeviceUsageNoInline();
  v14 = 0LL;
  PpmHeteroCapability = (__int64)Pool2;
  Pool2 = 0LL;
  stru_140FC11F0.WaitBlock[1].Object = v1;
  v1 = 0LL;
  v9 = 0;
  if ( !v13 )
    v14 = v0;
  v0 = v14;
  v15 = 0LL;
  if ( !v13 )
    v15 = v2;
  v2 = v15;
LABEL_28:
  if ( (unsigned int)Feature_WpsInitTableCollection__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( v0 )
      ExFreePoolWithTag(v0, 0x704D5050u);
    if ( v2 )
      ExFreePoolWithTag(v2, 0x704D5050u);
    if ( v5 )
      ExFreePoolWithTag(v5, 0x704D5050u);
    if ( v4 )
      ExFreePoolWithTag(v4, 0x704D5050u);
  }
  if ( Pool2 )
  {
    if ( (unsigned int)Feature_WpsInitTableCollection__private_IsEnabledDeviceUsageNoInline() )
    {
      v16 = (void *)Pool2[5];
      if ( v16 )
      {
        ExFreePoolWithTag(v16, 0x704D5050u);
        Pool2[5] = 0LL;
      }
      v17 = (void *)Pool2[4];
      if ( v17 )
      {
        ExFreePoolWithTag(v17, 0x704D5050u);
        Pool2[4] = 0LL;
      }
    }
    v18 = (void *)Pool2[3];
    if ( v18 )
    {
      ExFreePoolWithTag(v18, 0x704D5050u);
      Pool2[3] = 0LL;
    }
    v19 = (void *)Pool2[2];
    if ( v19 )
    {
      ExFreePoolWithTag(v19, 0x704D5050u);
      Pool2[2] = 0LL;
    }
    ExFreePoolWithTag(Pool2, 0x704D5050u);
  }
  if ( v1 )
  {
    if ( (unsigned int)Feature_WpsInitTableCollection__private_IsEnabledDeviceUsageNoInline() )
    {
      v20 = (void *)v1[5];
      if ( v20 )
      {
        ExFreePoolWithTag(v20, 0x704D5050u);
        v1[5] = 0LL;
      }
      v21 = (void *)v1[4];
      if ( v21 )
      {
        ExFreePoolWithTag(v21, 0x704D5050u);
        v1[4] = 0LL;
      }
    }
    v22 = (void *)v1[3];
    if ( v22 )
    {
      ExFreePoolWithTag(v22, 0x704D5050u);
      v1[3] = 0LL;
    }
    v23 = (void *)v1[2];
    if ( v23 )
    {
      ExFreePoolWithTag(v23, 0x704D5050u);
      v1[2] = 0LL;
    }
    ExFreePoolWithTag(v1, 0x704D5050u);
  }
  return v9;
}
