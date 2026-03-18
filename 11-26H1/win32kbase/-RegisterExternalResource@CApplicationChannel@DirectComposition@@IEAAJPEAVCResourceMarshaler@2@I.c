/*
 * XREFs of ?RegisterExternalResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IIW4RegistrationReason@12@@Z @ 0x1400A9FE8
 * Callers:
 *     ?OpenExternalSharedReadResource@CApplicationChannel@DirectComposition@@QEAAJIIPEAX@Z @ 0x140056340 (-OpenExternalSharedReadResource@CApplicationChannel@DirectComposition@@QEAAJIIPEAX@Z.c)
 *     ?OpenExternalSharedWriteResource@CApplicationChannel@DirectComposition@@QEAAJIIPEAX@Z @ 0x1400A9B44 (-OpenExternalSharedWriteResource@CApplicationChannel@DirectComposition@@QEAAJIIPEAX@Z.c)
 *     ?CreateExternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJII@Z @ 0x1400A9E94 (-CreateExternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJII@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolWithQuotaImpl@@YAPEAX_K0K@Z @ 0x1400A77FC (-Win32AllocPoolWithQuotaImpl@@YAPEAX_K0K@Z.c)
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x1400A7D44 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 *     McTemplateK0qqqxxqtt_EtwWriteTransfer @ 0x1400AA254 (McTemplateK0qqqxxqtt_EtwWriteTransfer.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1400AD868 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     memset @ 0x14024BD80 (memset.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::RegisterExternalResource(
        __int64 a1,
        struct DirectComposition::CResourceMarshaler *a2,
        unsigned int a3,
        int a4,
        int a5)
{
  char v6; // si
  struct DirectComposition::CResourceMarshaler *v7; // r15
  int v9; // ebp
  unsigned __int64 v10; // rax
  unsigned int v11; // r14d
  unsigned int v12; // edx
  size_t *v13; // r8
  size_t v14; // r8
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // r12
  _QWORD *v18; // r14
  unsigned __int64 v19; // kr00_8
  char *v20; // rax
  char *v21; // r15
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // kr10_8
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  char *v28; // rcx
  struct DirectComposition::CResourceMarshaler *Src; // [rsp+A0h] [rbp+8h] BYREF
  struct DirectComposition::CResourceMarshaler *v30; // [rsp+A8h] [rbp+10h]
  int v31; // [rsp+B8h] [rbp+20h]

  v31 = a4;
  v30 = a2;
  v6 = a4;
  v7 = a2;
  v9 = 0;
  if ( !a3 )
  {
    v9 = -1073741811;
    goto LABEL_13;
  }
  v10 = *(_QWORD *)(a1 + 88);
  v11 = a3;
  if ( a3 <= v10 )
  {
    v12 = a3 - 1;
    v13 = (size_t *)(a1 + 96);
    if ( !*(_QWORD *)(*(_QWORD *)(a1 + 96) * (a3 - 1) + *(_QWORD *)(a1 + 64)) )
      goto LABEL_4;
    v9 = -1073741790;
LABEL_13:
    DirectComposition::CApplicationChannel::ReleaseResource((DirectComposition::CApplicationChannel *)a1, v7);
    return (unsigned int)v9;
  }
  v16 = *(_QWORD *)(a1 + 80);
  v17 = a3 - v10;
  if ( a3 > v16 )
  {
    if ( !v16 )
      v16 = 64LL;
    while ( v16 < a3 )
    {
      if ( v16 >= 0x400 )
      {
        while ( v16 < a3 )
        {
          if ( v16 + 1024 < v16 )
            goto LABEL_23;
          v16 += 1024LL;
        }
        break;
      }
      Src = 0LL;
      v19 = v16;
      v16 *= 2LL;
      if ( !is_mul_ok(v19, 2uLL) )
        goto LABEL_23;
    }
    v23 = *(_QWORD *)(a1 + 96);
    v22 = v16 * v23;
    Src = 0LL;
    if ( is_mul_ok(v16, v23) )
    {
      v9 = 0;
      if ( *(_BYTE *)(a1 + 72) )
        v20 = (char *)Win32AllocPoolWithQuotaImpl(64LL, v22, 0x746C4344u);
      else
        v20 = (char *)Win32AllocPoolImpl(256LL, v22, 0x746C4344u);
      v21 = v20;
      if ( v20 )
      {
        v18 = (_QWORD *)(a1 + 88);
        v24 = *(_QWORD *)(a1 + 88);
        if ( v24 )
          memmove(v20, *(const void **)(a1 + 64), *(_QWORD *)(a1 + 96) * v24);
        memset(&v21[*(_QWORD *)(a1 + 96) * *v18], 0, *(_QWORD *)(a1 + 96) * (v16 - *v18));
        v28 = *(char **)(a1 + 64);
        if ( v28 )
          GreDeleteFastMutex(v28, v25, v26, v27);
        *(_QWORD *)(a1 + 64) = v21;
        v7 = v30;
        *(_QWORD *)(a1 + 80) = v16;
        goto LABEL_9;
      }
      v7 = v30;
    }
LABEL_23:
    v9 = -1073741801;
    goto LABEL_10;
  }
  v18 = (_QWORD *)(a1 + 88);
LABEL_9:
  *v18 += v17;
LABEL_10:
  v12 = a3 - 1;
  v11 = a3;
  v13 = (size_t *)(a1 + 96);
  if ( v9 < 0 )
    goto LABEL_13;
  v6 = v31;
LABEL_4:
  v14 = *v13;
  Src = v7;
  memmove((void *)(*(_QWORD *)(a1 + 64) + v14 * v12), &Src, v14);
  ++*(_QWORD *)(a1 + 104);
  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000000000LL) != 0 )
    McTemplateK0qqqxxqtt_EtwWriteTransfer(
      *((_DWORD *)v7 + 8),
      v11,
      a5 == 2,
      *(_DWORD *)(a1 + 28),
      *((_DWORD *)v7 + 8),
      a3,
      *((_DWORD *)v7 + 8),
      v11,
      v6,
      a5 == 1,
      a5 == 2);
  return (unsigned int)v9;
}
