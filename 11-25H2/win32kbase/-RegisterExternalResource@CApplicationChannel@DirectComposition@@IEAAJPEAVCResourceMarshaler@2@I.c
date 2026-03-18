/*
 * XREFs of ?RegisterExternalResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IIW4RegistrationReason@12@@Z @ 0x1400503C8
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1400ACB50 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolWithQuotaImpl@@YAPEAX_K0K@Z @ 0x140020FF4 (-Win32AllocPoolWithQuotaImpl@@YAPEAX_K0K@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x140022208 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x140026954 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 *     McTemplateK0qqqxxqtt_EtwWriteTransfer @ 0x14005061C (McTemplateK0qqqxxqtt_EtwWriteTransfer.c)
 *     memset @ 0x140243000 (memset.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::RegisterExternalResource(
        __int64 a1,
        struct DirectComposition::CResourceMarshaler *a2,
        unsigned int a3,
        int a4,
        int a5)
{
  char v6; // si
  int v9; // ebp
  unsigned __int64 v10; // rax
  unsigned int v11; // edx
  size_t v12; // r8
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // r12
  unsigned __int64 v16; // kr00_8
  char *v17; // rax
  char *v18; // r14
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // kr10_8
  __int64 v21; // r8
  char *v22; // rcx
  struct DirectComposition::CResourceMarshaler *Src; // [rsp+A0h] [rbp+8h] BYREF
  int v24; // [rsp+B8h] [rbp+20h]

  v24 = a4;
  v6 = a4;
  v9 = 0;
  if ( !a3 )
  {
    v9 = -1073741811;
    goto LABEL_33;
  }
  v10 = *(_QWORD *)(a1 + 88);
  if ( a3 <= v10 )
  {
    v11 = a3 - 1;
    if ( !*(_QWORD *)(*(_QWORD *)(a1 + 96) * (a3 - 1) + *(_QWORD *)(a1 + 64)) )
      goto LABEL_4;
    v9 = -1073741790;
LABEL_33:
    DirectComposition::CApplicationChannel::ReleaseResource((DirectComposition::CApplicationChannel *)a1, a2);
    return (unsigned int)v9;
  }
  v14 = *(_QWORD *)(a1 + 80);
  v15 = a3 - v10;
  if ( a3 > v14 )
  {
    if ( !v14 )
      v14 = 64LL;
    while ( v14 < a3 )
    {
      if ( v14 >= 0x400 )
      {
        while ( v14 < a3 )
        {
          if ( v14 + 1024 < v14 )
            goto LABEL_19;
          v14 += 1024LL;
        }
        break;
      }
      Src = 0LL;
      v16 = v14;
      v14 *= 2LL;
      if ( !is_mul_ok(v16, 2uLL) )
        goto LABEL_19;
    }
    v20 = *(_QWORD *)(a1 + 96);
    v19 = v14 * v20;
    Src = 0LL;
    if ( !is_mul_ok(v14, v20)
      || ((v9 = 0, *(_BYTE *)(a1 + 72))
        ? (v17 = (char *)Win32AllocPoolWithQuotaImpl(a3, v19, 0x746C4344u))
        : (v17 = (char *)Win32AllocPoolImpl(256LL, v19, 0x746C4344u)),
          (v18 = v17) == 0LL) )
    {
LABEL_19:
      v9 = -1073741801;
      goto LABEL_9;
    }
    v21 = *(_QWORD *)(a1 + 88);
    if ( v21 )
      memmove(v17, *(const void **)(a1 + 64), *(_QWORD *)(a1 + 96) * v21);
    memset(&v18[*(_QWORD *)(a1 + 88) * *(_QWORD *)(a1 + 96)], 0, *(_QWORD *)(a1 + 96) * (v14 - *(_QWORD *)(a1 + 88)));
    v22 = *(char **)(a1 + 64);
    if ( v22 )
      GreDeleteFastMutex(v22);
    *(_QWORD *)(a1 + 64) = v18;
    *(_QWORD *)(a1 + 80) = v14;
  }
  *(_QWORD *)(a1 + 88) += v15;
LABEL_9:
  v11 = a3 - 1;
  if ( v9 < 0 )
    goto LABEL_33;
  v6 = v24;
LABEL_4:
  v12 = *(_QWORD *)(a1 + 96);
  Src = a2;
  memmove((void *)(*(_QWORD *)(a1 + 64) + v12 * v11), &Src, v12);
  ++*(_QWORD *)(a1 + 104);
  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000000000LL) != 0 )
    McTemplateK0qqqxxqtt_EtwWriteTransfer(
      *((_DWORD *)a2 + 8),
      a3,
      a5 == 2,
      *(_DWORD *)(a1 + 28),
      *((_DWORD *)a2 + 8),
      a3,
      *((_DWORD *)a2 + 8),
      a3,
      v6,
      a5 == 1,
      a5 == 2);
  return (unsigned int)v9;
}
