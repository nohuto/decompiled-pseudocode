/*
 * XREFs of ACPIRangeValidatePciMemoryResource @ 0x14004BF04
 * Callers:
 *     ACPIRangeValidatePciResources @ 0x14004BB74 (ACPIRangeValidatePciResources.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400386C0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ddi @ 0x1400682F8 (WPP_RECORDER_SF_ddi.c)
 *     WPP_RECORDER_SF_ddiiii @ 0x1400683F4 (WPP_RECORDER_SF_ddiiii.c)
 *     WPP_RECORDER_SF_diiidiiii @ 0x140068554 (WPP_RECORDER_SF_diiidiiii.c)
 */

int __fastcall ACPIRangeValidatePciMemoryResource(__int64 a1, unsigned int a2, __int64 a3, _DWORD *a4)
{
  _UNKNOWN **v4; // rax
  ULONG_PTR v5; // rbx
  char v6; // r12
  __int64 v7; // r13
  __int64 v8; // r15
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r8
  unsigned int v11; // r14d
  int v12; // r9d
  __int64 v13; // rsi
  int v14; // ecx
  char v15; // di
  char v16; // si
  char v17; // r13
  int v18; // r9d
  int v20; // [rsp+28h] [rbp-49h]
  unsigned __int64 MaximumAddress; // [rsp+78h] [rbp+7h] BYREF
  unsigned __int64 MinimumAddress; // [rsp+80h] [rbp+Fh] BYREF
  _UNKNOWN **v23; // [rsp+88h] [rbp+17h]
  PIO_RESOURCE_DESCRIPTOR Descriptor; // [rsp+90h] [rbp+1Fh]
  _UNKNOWN *retaddr; // [rsp+D0h] [rbp+5Fh] BYREF
  unsigned __int64 Alignment; // [rsp+E8h] [rbp+77h] BYREF
  _DWORD *v28; // [rsp+F0h] [rbp+7Fh]

  v4 = &retaddr;
  v28 = a4;
  v5 = gE820Info;
  v6 = a2;
  v7 = a1;
  MinimumAddress = 0LL;
  MaximumAddress = 0LL;
  Alignment = 0LL;
  if ( gE820Info )
  {
    v8 = 32LL * a2;
    Descriptor = (PIO_RESOURCE_DESCRIPTOR)(v8 + a1 + 8);
    v4 = (_UNKNOWN **)RtlIoDecodeMemIoResource(Descriptor, &Alignment, &MinimumAddress, &MaximumAddress);
    v11 = 0;
    v12 = (int)v4;
    v23 = v4;
    if ( *(_QWORD *)(v5 + 8) )
    {
      v13 = 0LL;
      do
      {
        v14 = *(_DWORD *)(v5 + 24 * v13 + 32);
        if ( v14 != 2 )
        {
          LODWORD(v4) = v14 - 3;
          if ( (unsigned int)(v14 - 3) <= 1 && *(_DWORD *)(v5 + 24 * v13 + 28) )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v4) = WPP_RECORDER_SF_ddi(
                              WPP_GLOBAL_Control->DeviceExtension,
                              v9,
                              v10,
                              v12,
                              v20,
                              v11,
                              v14,
                              *(_QWORD *)(v5 + 24 * v13 + 24));
              v12 = (int)v23;
            }
            *(_DWORD *)(v5 + 24 * v13 + 28) = 0;
          }
          v9 = *(_QWORD *)(v5 + 24 * v13 + 16);
          if ( MaximumAddress >= v9 )
          {
            v10 = v9 + *(_QWORD *)(v5 + 24 * v13 + 24);
            if ( MinimumAddress < v10 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_diiidiiii(
                  WPP_GLOBAL_Control->DeviceExtension,
                  v9,
                  v10,
                  v12,
                  v20,
                  v11,
                  *(_DWORD *)(v5 + 24 * v13 + 32),
                  v9,
                  v10,
                  v6,
                  *(_QWORD *)(v8 + v7 + 24),
                  *(_QWORD *)(v8 + v7 + 32),
                  v12,
                  Alignment);
              if ( (AcpiOverrideAttributes & 1) != 0 && *(_DWORD *)(v5 + 24 * v13 + 32) == 4 )
              {
                v4 = *(_UNKNOWN ***)(v5 + 24 * v13 + 16);
                if ( MaximumAddress >= (unsigned __int64)v4 )
                {
                  v15 = MinimumAddress;
                  if ( MinimumAddress < (unsigned __int64)v4 )
                  {
                    v16 = (_BYTE)v4 - 1;
                    v17 = (_BYTE)v4 - MinimumAddress;
                    LODWORD(v4) = RtlIoEncodeMemIoResource(
                                    Descriptor,
                                    *(_BYTE *)(v8 + a1 + 9),
                                    (ULONGLONG)v4 - MinimumAddress,
                                    Alignment,
                                    MinimumAddress,
                                    (ULONGLONG)v4 - 1);
                    if ( (int)v4 < 0 )
                      return (int)v4;
                    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                      goto LABEL_24;
                    LODWORD(v4) = WPP_RECORDER_SF_ddiiii(
                                    WPP_GLOBAL_Control->DeviceExtension,
                                    v9,
                                    v10,
                                    v18,
                                    v20,
                                    v6,
                                    v6,
                                    v15,
                                    v16,
                                    v17,
                                    Alignment);
                  }
                }
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v9) = 4;
                  LODWORD(v4) = WPP_RECORDER_SF_d(
                                  WPP_GLOBAL_Control->DeviceExtension,
                                  v9,
                                  22,
                                  13,
                                  (__int64)&WPP_1fd0c010928a3334a25fba642ba00601_Traceguids,
                                  v11);
                }
              }
              else
              {
                LODWORD(v4) = (_DWORD)v28;
                ++*v28;
              }
            }
          }
        }
LABEL_24:
        v7 = a1;
        ++v11;
        v12 = (int)v23;
        v13 = v11;
      }
      while ( (unsigned __int64)v11 < *(_QWORD *)(v5 + 8) );
    }
  }
  return (int)v4;
}
