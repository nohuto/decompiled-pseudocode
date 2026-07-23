/*
 * XREFs of SepGetTokenAccessInformationBufferSize @ 0x140A4EF60
 * Callers:
 *     SeQueryInformationToken @ 0x1408FA8C0 (SeQueryInformationToken.c)
 *     NtQueryInformationToken @ 0x140B81F50 (NtQueryInformationToken.c)
 * Callees:
 *     SepTokenPrivilegeCount @ 0x1404776A4 (SepTokenPrivilegeCount.c)
 *     AuthzBasepGetInternalSecurityAttributeValueCopyoutBufferSize @ 0x14048B68C (AuthzBasepGetInternalSecurityAttributeValueCopyoutBufferSize.c)
 *     AuthzBasepCopyoutInternalSecurityAttributes @ 0x140A4F30C (AuthzBasepCopyoutInternalSecurityAttributes.c)
 */

__int64 __fastcall SepGetTokenAccessInformationBufferSize(
        __int64 a1,
        char a2,
        __int64 a3,
        _DWORD *a4,
        int *a5,
        int *a6,
        int *a7,
        int *a8,
        unsigned int *a9,
        int *a10,
        int *a11,
        unsigned int *a12,
        unsigned int *a13)
{
  unsigned int v15; // r13d
  __int64 v16; // r11
  int v17; // ecx
  unsigned int v18; // ecx
  int v19; // esi
  __int64 *v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rax
  int v23; // esi
  int v24; // r12d
  __int64 *v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned int v29; // r14d
  unsigned int v30; // ebp
  unsigned int *v31; // rsi
  unsigned __int64 v32; // rbx
  unsigned int v33; // ebx
  __int64 v34; // rdi
  unsigned int v35; // ecx
  __int64 *v37; // rdx
  __int64 v38; // r8
  __int64 v39; // rax
  int v40; // [rsp+20h] [rbp-58h]
  int v41; // [rsp+24h] [rbp-54h]
  int v42; // [rsp+28h] [rbp-50h]
  int v43; // [rsp+2Ch] [rbp-4Ch]
  int v44; // [rsp+30h] [rbp-48h]
  int v45; // [rsp+34h] [rbp-44h]
  int v46; // [rsp+80h] [rbp+8h]
  unsigned int v47; // [rsp+88h] [rbp+10h] BYREF
  _DWORD *v48; // [rsp+98h] [rbp+20h]

  v48 = a4;
  v15 = 0;
  v41 = SepTokenPrivilegeCount(a1);
  v17 = 12 * v41 + 4;
  if ( !v41 )
    v17 = 16;
  v45 = v17;
  v18 = *(_DWORD *)(v16 + 124);
  v43 = 16 * *(_DWORD *)(v16 + 128);
  v42 = 16 * v18;
  v19 = 16 * v18;
  v44 = 16 * *(_DWORD *)(v16 + 800);
  v46 = 16 * v18;
  if ( v18 )
  {
    v20 = *(__int64 **)(v16 + 152);
    v21 = v18;
    do
    {
      v22 = *v20;
      v20 += 2;
      v19 += (4 * *(unsigned __int8 *)(v22 + 1) + 15) & 0xFFFFFFF8;
      --v21;
    }
    while ( v21 );
    v46 = v19;
  }
  v40 = 16 * *(_DWORD *)(v16 + 128);
  v23 = v40;
  if ( *(_DWORD *)(v16 + 128) )
  {
    v37 = *(__int64 **)(v16 + 160);
    v38 = *(unsigned int *)(v16 + 128);
    do
    {
      v39 = *v37;
      v37 += 2;
      v23 += (4 * *(unsigned __int8 *)(v39 + 1) + 15) & 0xFFFFFFF8;
      --v38;
    }
    while ( v38 );
    v40 = v23;
  }
  v24 = 16 * *(_DWORD *)(v16 + 800);
  if ( *(_DWORD *)(v16 + 800) )
  {
    v25 = *(__int64 **)(v16 + 792);
    v26 = *(unsigned int *)(v16 + 800);
    do
    {
      v27 = *v25;
      v25 += 2;
      v24 += (4 * *(unsigned __int8 *)(v27 + 1) + 15) & 0xFFFFFFF8;
      --v26;
    }
    while ( v26 );
  }
  v28 = *(_QWORD *)(v16 + 784);
  v29 = 0;
  if ( v28 )
    v29 = (4 * *(unsigned __int8 *)(v28 + 1) + 15) & 0xFFFFFFF8;
  if ( !a2 )
    a3 = *(_QWORD *)(v16 + 1104);
  v30 = 0;
  if ( a3 )
    v30 = (4 * *(unsigned __int8 *)(a3 + 1) + 15) & 0xFFFFFFF8;
  v31 = *(unsigned int **)(v16 + 776);
  if ( v31 )
  {
    v32 = 112LL * *v31;
    if ( v32 <= 0xFFFFFFFF )
    {
      v33 = v32 + 48;
      if ( v33 >= 0x30 )
      {
        v34 = *((_QWORD *)v31 + 1);
        while ( (unsigned int *)v34 != v31 + 2 )
        {
          v35 = (v33 + 1) & 0xFFFFFFFE;
          if ( v35 < v33 )
            goto LABEL_29;
          if ( v35 + *(unsigned __int16 *)(v34 + 32) < v35 )
            goto LABEL_29;
          v47 = v35 + *(unsigned __int16 *)(v34 + 32);
          if ( (int)AuthzBasepGetInternalSecurityAttributeValueCopyoutBufferSize(v34, &v47) < 0 )
            goto LABEL_29;
          v34 = *(_QWORD *)v34;
          v33 = v47;
        }
        if ( !v33 )
          AuthzBasepCopyoutInternalSecurityAttributes(v31, 0LL, 0LL);
        v15 = v33;
      }
    }
  }
LABEL_29:
  *v48 = v41;
  *a5 = v46;
  *a6 = v42;
  *a7 = v40;
  *a8 = v43;
  *a9 = v29;
  *a10 = v24;
  *a11 = v44;
  *a12 = v30;
  *a13 = v15;
  return v46 + v40 + v29 + 904 + v24 + v30 + v15 + v45;
}
