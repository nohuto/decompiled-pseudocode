/*
 * XREFs of FsRtlCheckUpperOplock @ 0x140791080
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402756B0 (ExReleaseFastMutexUnsafe.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x1403F47AC (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     FsRtlpComputeShareableOplockState @ 0x1403F4F58 (FsRtlpComputeShareableOplockState.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x1403F5200 (FsRtlpOplockBreakByCacheFlags.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403F8AE0 (ExAcquireFastMutexUnsafe.c)
 *     FsRtlpOplockBreakToII @ 0x14050E330 (FsRtlpOplockBreakToII.c)
 *     FsRtlpOplockBreakToNone @ 0x1405297A0 (FsRtlpOplockBreakToNone.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     FsRtlpOplockUpperLowerCompatible @ 0x140A9E410 (FsRtlpOplockUpperLowerCompatible.c)
 */

__int64 __fastcall FsRtlCheckUpperOplock(__int64 *a1, char a2, __int64 a3, __int64 a4, __int64 a5, unsigned int a6)
{
  unsigned int v6; // r15d
  __int64 v7; // rdi
  bool v8; // r14
  char v9; // r13
  int v10; // esi
  unsigned int v11; // ebx
  unsigned int v12; // r10d
  __int64 *i; // rsi
  __int16 v14; // r10
  unsigned __int8 v15; // r15
  unsigned int v16; // eax
  unsigned int v17; // eax
  __int64 v19; // [rsp+20h] [rbp-1A8h]
  __int64 v20; // [rsp+20h] [rbp-1A8h]
  char v21; // [rsp+60h] [rbp-168h] BYREF
  char v22; // [rsp+61h] [rbp-167h] BYREF
  int v23; // [rsp+64h] [rbp-164h]
  unsigned int v24; // [rsp+68h] [rbp-160h] BYREF
  __int64 v25; // [rsp+70h] [rbp-158h] BYREF
  __int64 v26; // [rsp+78h] [rbp-150h] BYREF
  __int64 v27; // [rsp+80h] [rbp-148h] BYREF
  _QWORD v28[3]; // [rsp+88h] [rbp-140h] BYREF
  __int64 v29; // [rsp+A0h] [rbp-128h] BYREF
  __int64 v30; // [rsp+A8h] [rbp-120h]
  _BYTE v31[80]; // [rsp+B0h] [rbp-118h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+100h] [rbp-C8h] BYREF
  unsigned int *v33; // [rsp+120h] [rbp-A8h]
  __int64 v34; // [rsp+128h] [rbp-A0h]
  char *v35; // [rsp+130h] [rbp-98h]
  __int64 v36; // [rsp+138h] [rbp-90h]
  __int64 *v37; // [rsp+140h] [rbp-88h]
  __int64 v38; // [rsp+148h] [rbp-80h]
  __int64 *v39; // [rsp+150h] [rbp-78h]
  __int64 v40; // [rsp+158h] [rbp-70h]
  __int64 *v41; // [rsp+160h] [rbp-68h]
  __int64 v42; // [rsp+168h] [rbp-60h]
  __int64 *v43; // [rsp+170h] [rbp-58h]
  __int64 v44; // [rsp+178h] [rbp-50h]

  v26 = a4;
  v27 = a3;
  v25 = a5;
  v6 = ((a2 & 1) << 12) | ((a2 & 6) << 12);
  v30 = *a1;
  v7 = v30;
  v21 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v22 = 0;
  memset_0(v31, 0, 0x48uLL);
  v11 = 0;
  if ( !v30 )
    return v11;
  ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(v30 + 152));
  v21 = 1;
  v12 = *(_DWORD *)(v30 + 144);
  if ( v12 != 1 )
  {
    if ( (a6 & 0x20000) != 0 )
    {
      if ( ((v12 - 4096) & 0xFFFFFFEF) != 0 )
      {
        v11 = -1073739511;
        v23 = -1073739511;
      }
      else
      {
        for ( i = *(__int64 **)(v30 + 40); i != (__int64 *)(v30 + 40); i = (__int64 *)*i )
        {
          if ( *(_DWORD *)(i[2] + 24) == 590400 )
          {
            i = (__int64 *)i[1];
            FsRtlpRemoveAndCompleteReadOnlyIrp((_QWORD *)*i, 0, 0x1000u, v30);
          }
        }
        FsRtlpComputeShareableOplockState(v30);
      }
      goto LABEL_37;
    }
    if ( !(unsigned __int8)FsRtlpOplockUpperLowerCompatible(v12, v6) )
    {
      if ( v6 )
      {
        switch ( v6 )
        {
          case 0x1000u:
            v8 = 1;
            if ( (v14 & 0x5000) == 0x5000 )
            {
              v15 = 1;
              v10 = 0x4000;
              goto LABEL_26;
            }
            if ( (*(_DWORD *)(v30 + 144) & 0x5000) != 0 )
              v10 = *(_DWORD *)(v30 + 144) & 0x5000;
            break;
          case 0x3000u:
            v8 = 1;
            v10 = 0x4000;
            break;
          case 0x5000u:
            v10 = 0x2000;
            v8 = (*(_DWORD *)(v30 + 144) & 4) != 0;
            break;
          default:
            v11 = -1073741597;
            v23 = -1073741597;
            goto LABEL_37;
        }
      }
      else
      {
        v9 = 1;
        v10 = 28672;
      }
      v15 = v22;
LABEL_26:
      v31[0] = 3;
      v28[0] = v27;
      v28[1] = v26;
      v28[2] = v25;
      if ( v8 )
      {
        v16 = FsRtlpOplockBreakToII(v30, (__int64)v31, 0LL, a6, v19, v28, 0LL, &v21, 0LL);
      }
      else
      {
        if ( !v9 )
        {
LABEL_31:
          if ( !v11 && (*(_DWORD *)(v7 + 144) & v10) != 0 )
          {
            LODWORD(v19) = 0;
            v17 = FsRtlpOplockBreakByCacheFlags(
                    v7,
                    (__int64)v31,
                    0LL,
                    a6 | v15,
                    v19,
                    v10,
                    0LL,
                    0LL,
                    (__int64)v28,
                    0LL,
                    &v21,
                    0LL);
            v11 = v17;
            v23 = v17;
            if ( v15 )
            {
              if ( (unsigned int)dword_140E06B30 > 5 )
              {
                v24 = v17;
                v33 = &v24;
                v34 = 4LL;
                v22 = v21;
                v35 = &v22;
                v36 = 1LL;
                LODWORD(v25) = a6;
                v37 = &v25;
                v38 = 4LL;
                LODWORD(v26) = v10;
                v39 = &v26;
                v40 = 4LL;
                v29 = v7;
                v41 = &v29;
                v42 = 8LL;
                LODWORD(v27) = *(_DWORD *)(v7 + 144);
                v43 = &v27;
                v44 = 4LL;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_140E06B30,
                  (unsigned __int8 *)byte_140046F50,
                  0LL,
                  0LL,
                  8u,
                  &v32);
              }
              LODWORD(v20) = 0;
              v11 = FsRtlpOplockBreakByCacheFlags(
                      v7,
                      (__int64)v31,
                      0LL,
                      a6,
                      v20,
                      0x2000,
                      0LL,
                      0LL,
                      (__int64)v28,
                      0LL,
                      &v21,
                      0LL);
              v23 = v11;
            }
          }
          goto LABEL_37;
        }
        v16 = FsRtlpOplockBreakToNone(v30, (__int64)v31, 0LL, a6, v19, v28, 0LL, &v21, 0LL);
      }
      v23 = v16;
      v11 = v16;
      goto LABEL_31;
    }
  }
LABEL_37:
  if ( v21 )
    ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(v7 + 152));
  return v11;
}
