/*
 * XREFs of AlpcpCaptureAttributes @ 0x14098F668
 * Callers:
 *     AlpcpAcceptConnectPort @ 0x1408ECFF0 (AlpcpAcceptConnectPort.c)
 *     AlpcpFormatConnectionRequest @ 0x1408EE1CC (AlpcpFormatConnectionRequest.c)
 *     AlpcpSendMessage @ 0x14098E2D0 (AlpcpSendMessage.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     AlpcpCaptureDirectAttribute @ 0x1407C4FE0 (AlpcpCaptureDirectAttribute.c)
 *     AlpcpCaptureDirectAttribute32 @ 0x1407C5094 (AlpcpCaptureDirectAttribute32.c)
 *     AlpcpProbeMessageAttributes @ 0x140925AE0 (AlpcpProbeMessageAttributes.c)
 *     AlpcpCaptureSecurityAttribute @ 0x14098CED0 (AlpcpCaptureSecurityAttribute.c)
 *     AlpcpReleaseAttributes @ 0x14098DA90 (AlpcpReleaseAttributes.c)
 *     AlpcpCaptureHandleAttribute32 @ 0x1409B924C (AlpcpCaptureHandleAttribute32.c)
 *     AlpcpCaptureHandleAttribute @ 0x1409BAD54 (AlpcpCaptureHandleAttribute.c)
 *     AlpcpCaptureWorkOnBehalfAttribute @ 0x140A66BE0 (AlpcpCaptureWorkOnBehalfAttribute.c)
 *     AlpcpCaptureContextAttribute @ 0x140A87FDC (AlpcpCaptureContextAttribute.c)
 *     AlpcpCaptureContextAttribute32 @ 0x140AA3BC0 (AlpcpCaptureContextAttribute32.c)
 *     AlpcpCaptureViewAttribute @ 0x140AAE534 (AlpcpCaptureViewAttribute.c)
 *     AlpcpCaptureSecurityAttribute32 @ 0x140AB872C (AlpcpCaptureSecurityAttribute32.c)
 *     AlpcpCaptureViewAttribute32 @ 0x140AFEBB0 (AlpcpCaptureViewAttribute32.c)
 */

__int64 __fastcall AlpcpCaptureAttributes(__int64 a1, int a2, unsigned int *a3, __int64 a4, _QWORD *a5)
{
  __int64 v9; // r8
  __int64 v10; // r9
  char AccessMode; // r12
  signed int v13; // r15d
  int ULongFromUser; // edi
  int v15; // ebx
  int v16; // edx
  __int64 v17; // rdx
  __int64 v18; // rcx
  signed int v19; // r15d
  __int64 v20; // rcx
  __int64 v21; // rax
  char *v22; // rdx
  char *v23; // rcx
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  signed int v28; // r15d
  __int64 v29; // rcx
  __int64 v30; // rax
  char *v31; // rdx
  char *v32; // rcx
  int v33; // [rsp+20h] [rbp-58h]

  memset_0(a5, 0, 0x48uLL);
  *a5 = *(_QWORD *)(a4 + 104);
  a5[1] = *(_QWORD *)(a4 + 112);
  if ( !a3 )
    return 0LL;
  AccessMode = KeGetCurrentThread()->PreviousMode;
  if ( AccessMode )
  {
    v13 = AlpcpProbeMessageAttributes(a2, a3, 0);
    ULongFromUser = RtlReadULongFromUser(a3 + 1);
  }
  else
  {
    v13 = *a3;
    ULongFromUser = a3[1];
  }
  if ( (~v13 & ULongFromUser) != 0 )
    return 3221225485LL;
  v15 = 0;
  if ( a2 >= 0 )
  {
    if ( ULongFromUser < 0 )
    {
      v15 = AlpcpCaptureSecurityAttribute(a1, a3 + 2, (__int64)a5, AccessMode);
      if ( v15 < 0 )
        goto LABEL_60;
    }
    if ( (ULongFromUser & 0x40000000) != 0 )
    {
      v15 = AlpcpCaptureViewAttribute(
              a1,
              (unsigned int)a3 + (((__int64)(v13 & 0xFFFFFFFF80000000uLL) >> 63) & 0x18) + 8,
              a4,
              (_DWORD)a5,
              AccessMode);
      if ( v15 < 0 )
        goto LABEL_60;
    }
    if ( (ULongFromUser & 0x20000000) != 0 )
    {
      v25 = (((int)(v13 & 0xC0000000) >> 31) & 0x18) + 40LL;
      if ( (v13 & 0x40000000) == 0 )
        v25 = (((int)(v13 & 0xC0000000) >> 31) & 0x18) + 8LL;
      LOBYTE(v33) = AccessMode;
      v15 = AlpcpCaptureContextAttribute(a1, (char *)a3 + v25, a4, a5, v33);
      if ( v15 < 0 )
        goto LABEL_60;
    }
    if ( (ULongFromUser & 0x10000000) != 0 )
    {
      v26 = (((int)(v13 & 0xE0000000) >> 31) & 0x18) + 40LL;
      if ( (v13 & 0x40000000) == 0 )
        v26 = (((int)(v13 & 0xE0000000) >> 31) & 0x18) + 8LL;
      v27 = v26 + 32;
      if ( (v13 & 0x20000000) == 0 )
        v27 = v26;
      v15 = AlpcpCaptureHandleAttribute((char *)a3 + v27);
      if ( v15 < 0 )
        goto LABEL_60;
    }
    if ( (ULongFromUser & 0x4000000) == 0 )
      goto LABEL_58;
    v28 = v13 & 0xF8000000;
    v29 = ((v28 >> 31) & 0x18) + 40LL;
    if ( (v28 & 0x40000000) == 0 )
      v29 = ((v28 >> 31) & 0x18) + 8LL;
    v30 = v29 + 32;
    if ( (v28 & 0x20000000) == 0 )
      v30 = v29;
    v31 = (char *)(v30 + 24);
    if ( (v28 & 0x10000000) == 0 )
      v31 = (char *)v30;
    v32 = v31 + 24;
    if ( (v28 & 0x8000000) == 0 )
      v32 = v31;
    v24 = AlpcpCaptureDirectAttribute(
            (unsigned __int64 *)&v32[(_QWORD)a3],
            v31,
            (__int64)a5,
            a2,
            ULongFromUser,
            AccessMode);
  }
  else
  {
    if ( ULongFromUser < 0 )
    {
      LOBYTE(v10) = AccessMode;
      v15 = AlpcpCaptureSecurityAttribute32(a1, a3 + 2, a5, v10);
      if ( v15 < 0 )
        goto LABEL_60;
    }
    if ( (ULongFromUser & 0x40000000) != 0 )
    {
      v15 = AlpcpCaptureViewAttribute32(
              a1,
              (unsigned int)a3 + (((__int64)(v13 & 0xFFFFFFFF80000000uLL) >> 63) & 0xC) + 8,
              a4,
              (_DWORD)a5,
              AccessMode);
      if ( v15 < 0 )
        goto LABEL_60;
    }
    if ( (ULongFromUser & 0x20000000) != 0 )
    {
      v16 = (((int)(v13 & 0xC0000000) >> 31) & 0xC) + 24;
      if ( (v13 & 0x40000000) == 0 )
        v16 = (((int)(v13 & 0xC0000000) >> 31) & 0xC) + 8;
      v15 = AlpcpCaptureContextAttribute32(a1, (int)a3 + v16, a4, (_DWORD)a5, AccessMode);
      if ( v15 < 0 )
        goto LABEL_60;
    }
    if ( (ULongFromUser & 0x10000000) != 0 )
    {
      v17 = (((int)(v13 & 0xE0000000) >> 31) & 0xC) + 24LL;
      if ( (v13 & 0x40000000) == 0 )
        v17 = (((int)(v13 & 0xE0000000) >> 31) & 0xC) + 8LL;
      v18 = v17 + 20;
      if ( (v13 & 0x20000000) == 0 )
        v18 = v17;
      LOBYTE(v9) = AccessMode;
      v15 = AlpcpCaptureHandleAttribute32((char *)a3 + v18, a5, v9);
      if ( v15 < 0 )
        goto LABEL_60;
    }
    if ( (ULongFromUser & 0x4000000) == 0 )
      goto LABEL_58;
    v19 = v13 & 0xF8000000;
    v20 = ((v19 >> 31) & 0xC) + 24LL;
    if ( (v19 & 0x40000000) == 0 )
      v20 = ((v19 >> 31) & 0xC) + 8LL;
    v21 = v20 + 20;
    if ( (v19 & 0x20000000) == 0 )
      v21 = v20;
    v22 = (char *)(v21 + 16);
    if ( (v19 & 0x10000000) == 0 )
      v22 = (char *)v21;
    v23 = v22 + 24;
    if ( (v19 & 0x8000000) == 0 )
      v23 = v22;
    v24 = AlpcpCaptureDirectAttribute32(
            (unsigned int *)&v23[(_QWORD)a3],
            v22,
            (__int64)a5,
            a2,
            ULongFromUser,
            AccessMode);
  }
  v15 = v24;
  if ( v24 >= 0 )
  {
LABEL_58:
    if ( (ULongFromUser & 0x2000000) != 0 )
      v15 = AlpcpCaptureWorkOnBehalfAttribute(a5);
  }
LABEL_60:
  if ( v15 < 0 )
    AlpcpReleaseAttributes(0LL, a5);
  return (unsigned int)v15;
}
