/*
 * XREFs of NVMeGetLogPageTelemetryDataCompletion @ 0x14001E080
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x140003A40 (GetSrbExtension.c)
 *     GetSrbDataBuffer @ 0x14000F230 (GetSrbDataBuffer.c)
 *     NVMeFreeDmaBuffer @ 0x14000FA50 (NVMeFreeDmaBuffer.c)
 *     memmove @ 0x140032740 (memmove.c)
 *     memset @ 0x140032A40 (memset.c)
 */

char __fastcall NVMeGetLogPageTelemetryDataCompletion(__int64 a1, __int64 a2)
{
  __int64 SrbExtension; // rax
  __int64 v5; // rbx
  size_t v6; // rdi
  __int64 SrbDataBuffer; // rax
  int v8; // r8d
  __int64 v9; // rbp
  _DWORD *v10; // r14
  __int64 v11; // rdx
  char v12; // cl
  char v13; // al
  char v14; // cl
  char v15; // al
  char v16; // cl
  char v17; // cl
  size_t v18; // r8
  const void *v19; // rdx
  void *v20; // rcx
  _DWORD *v22; // [rsp+C0h] [rbp+8h] BYREF

  SrbExtension = GetSrbExtension(a2);
  v22 = 0LL;
  v5 = SrbExtension;
  v6 = *(unsigned int *)(SrbExtension + 4208);
  SrbDataBuffer = GetSrbDataBuffer(a2, &v22);
  v9 = SrbDataBuffer;
  if ( *(_BYTE *)(a2 + 3) == 1 )
  {
    v10 = v22;
    if ( v8 )
    {
      if ( (unsigned int)v6 < 0x200 || *v22 < (unsigned int)v6 || *(_BYTE *)(a1 + 20) )
        goto LABEL_22;
      v19 = *(const void **)(v5 + 4160);
      v18 = v6;
      v20 = (void *)SrbDataBuffer;
LABEL_21:
      LOBYTE(SrbDataBuffer) = (unsigned __int8)memmove(v20, v19, v18);
LABEL_22:
      *v10 = v6;
      goto LABEL_25;
    }
    if ( !*(_BYTE *)(a1 + 20) )
    {
      LODWORD(SrbDataBuffer) = *v22;
      if ( (*v22 & 3) != 0 )
      {
        if ( (_DWORD)SrbDataBuffer )
          LOBYTE(SrbDataBuffer) = (unsigned __int8)memset((void *)v9, 0, (unsigned int)*v22);
      }
      else
      {
        LODWORD(SrbDataBuffer) = (unsigned int)SrbDataBuffer >> 2;
        if ( (_DWORD)SrbDataBuffer )
          LOBYTE(SrbDataBuffer) = (unsigned __int8)memset((void *)v9, 0, 4LL * (unsigned int)SrbDataBuffer);
      }
    }
    v11 = *(_QWORD *)(v5 + 4160);
    if ( (unsigned int)v6 >= 0x200 )
    {
      v12 = *(_BYTE *)(v11 + 5);
      if ( *(_BYTE *)(a1 + 20) )
      {
        *(_BYTE *)(v11 + 5) = *(_BYTE *)(v11 + 7);
        v13 = *(_BYTE *)(v11 + 9);
        *(_BYTE *)(v11 + 7) = v12;
        v14 = *(_BYTE *)(v11 + 8);
        *(_BYTE *)(v11 + 8) = v13;
        v15 = *(_BYTE *)(v11 + 11);
        *(_BYTE *)(v11 + 9) = v14;
        v16 = *(_BYTE *)(v11 + 10);
        *(_BYTE *)(v11 + 10) = v15;
        LOBYTE(SrbDataBuffer) = *(_BYTE *)(v11 + 13);
        *(_BYTE *)(v11 + 11) = v16;
        v17 = *(_BYTE *)(v11 + 12);
        *(_BYTE *)(v11 + 12) = SrbDataBuffer;
        *(_BYTE *)(v11 + 13) = v17;
      }
      else
      {
        *(_BYTE *)(v9 + 7) = v12;
        *(_BYTE *)(v9 + 6) = *(_BYTE *)(v11 + 6);
        *(_BYTE *)(v9 + 5) = *(_BYTE *)(v11 + 7);
        *(_BYTE *)(v9 + 9) = *(_BYTE *)(v11 + 8);
        *(_BYTE *)(v9 + 8) = *(_BYTE *)(v11 + 9);
        *(_BYTE *)(v9 + 11) = *(_BYTE *)(v11 + 10);
        *(_BYTE *)(v9 + 10) = *(_BYTE *)(v11 + 11);
        *(_BYTE *)(v9 + 13) = *(_BYTE *)(v11 + 12);
        *(_BYTE *)(v9 + 12) = *(_BYTE *)(v11 + 13);
        *(_BYTE *)(v9 + 17) = *(_BYTE *)(v11 + 16);
        *(_BYTE *)(v9 + 16) = *(_BYTE *)(v11 + 17);
        *(_BYTE *)(v9 + 15) = *(_BYTE *)(v11 + 18);
        *(_BYTE *)(v9 + 14) = *(_BYTE *)(v11 + 19);
        *(_BYTE *)(v9 + 382) = *(_BYTE *)(v11 + 382);
        LOBYTE(SrbDataBuffer) = *(_BYTE *)(v11 + 383);
        *(_BYTE *)(v9 + 383) = SrbDataBuffer;
        *(_OWORD *)(v9 + 384) = *(_OWORD *)(v11 + 384);
        *(_OWORD *)(v9 + 400) = *(_OWORD *)(v11 + 400);
        *(_OWORD *)(v9 + 416) = *(_OWORD *)(v11 + 416);
        *(_OWORD *)(v9 + 432) = *(_OWORD *)(v11 + 432);
        *(_OWORD *)(v9 + 448) = *(_OWORD *)(v11 + 448);
        *(_OWORD *)(v9 + 464) = *(_OWORD *)(v11 + 464);
        *(_OWORD *)(v9 + 480) = *(_OWORD *)(v11 + 480);
        *(_OWORD *)(v9 + 496) = *(_OWORD *)(v11 + 496);
      }
      if ( (unsigned int)v6 <= 0x200 || *v10 < (unsigned int)v6 || *(_BYTE *)(a1 + 20) )
        goto LABEL_22;
      v18 = (unsigned int)(v6 - 512);
      v19 = (const void *)(v11 + 512);
      v20 = (void *)(v9 + 512);
      goto LABEL_21;
    }
  }
  if ( (*(_BYTE *)(a1 + 21) & 8) != 0 )
    LOBYTE(SrbDataBuffer) = StorPortExtendedFunction(86LL, a1, 0LL, 0LL);
LABEL_25:
  if ( !*(_BYTE *)(a1 + 20) )
    LOBYTE(SrbDataBuffer) = NVMeFreeDmaBuffer(
                              a1,
                              *(unsigned int *)(v5 + 4208),
                              (__int64 *)(v5 + 4160),
                              *(_QWORD *)(v5 + 4168));
  *(_BYTE *)(v5 + 4225) |= 8u;
  *(_QWORD *)(v5 + 4160) = 0LL;
  *(_DWORD *)(v5 + 4208) = 0;
  return SrbDataBuffer;
}
