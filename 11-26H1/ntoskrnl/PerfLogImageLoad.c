/*
 * XREFs of PerfLogImageLoad @ 0x140A8B0E0
 * Callers:
 *     PsCallImageNotifyRoutines @ 0x1409E6750 (PsCallImageNotifyRoutines.c)
 * Callees:
 *     EtwTraceSiloKernelEvent @ 0x140216D50 (EtwTraceSiloKernelEvent.c)
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     RtlImageNtHeader @ 0x140462E40 (RtlImageNtHeader.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     EtwpPsProvTraceImage @ 0x140A8B330 (EtwpPsProvTraceImage.c)
 */

void __fastcall PerfLogImageLoad(unsigned __int16 *a1, __int64 a2, int *a3)
{
  _QWORD *v6; // r12
  int v7; // ecx
  int v8; // r14d
  int v9; // r14d
  PIMAGE_NT_HEADERS v10; // rax
  PIMAGE_NT_HEADERS v11; // rsi
  int CheckSum; // eax
  int TimeDateStamp; // eax
  __int64 ImageBase; // rax
  PVOID v15[2]; // [rsp+50h] [rbp-B8h] BYREF
  int v16; // [rsp+60h] [rbp-A8h]
  __int64 v17; // [rsp+64h] [rbp-A4h]
  char v18; // [rsp+6Ch] [rbp-9Ch]
  _BYTE v19[3]; // [rsp+6Dh] [rbp-9Bh]
  __int64 v20; // [rsp+70h] [rbp-98h]
  __int64 v21; // [rsp+78h] [rbp-90h]
  __int64 v22; // [rsp+80h] [rbp-88h]
  __int64 v23; // [rsp+88h] [rbp-80h]
  _QWORD v24[3]; // [rsp+90h] [rbp-78h] BYREF
  int v25; // [rsp+A8h] [rbp-60h]
  int v26; // [rsp+ACh] [rbp-5Ch]
  __int64 *v27; // [rsp+B0h] [rbp-58h]
  __int64 v28; // [rsp+B8h] [rbp-50h]

  v15[0] = 0LL;
  v23 = 0LL;
  if ( a1 )
  {
    if ( *a1 )
    {
      v6 = a1 + 4;
      if ( *((_QWORD *)a1 + 1) )
      {
        if ( a2 )
          v7 = *(_DWORD *)(a2 + 464);
        else
          v7 = 0;
        v15[0] = *((PVOID *)a3 + 1);
        v15[1] = *((PVOID *)a3 + 3);
        v16 = v7;
        *(_WORD *)&v19[1] = 0;
        v21 = 0LL;
        v22 = 0LL;
        v17 = 0LL;
        v20 = 0LL;
        v8 = *a3;
        v18 = ((unsigned int)*a3 >> 12) & 0xF;
        *(_WORD *)v19 = BYTE2(v8) & 7;
        v9 = v8 & 0x100;
        v10 = RtlImageNtHeader(v15[0]);
        v11 = v10;
        if ( v10 )
        {
          if ( v9 )
            CheckSum = v10->OptionalHeader.CheckSum;
          else
            CheckSum = RtlReadULongFromUser(&v10->OptionalHeader.CheckSum);
          LODWORD(v17) = CheckSum;
          if ( v9 )
            TimeDateStamp = v11->FileHeader.TimeDateStamp;
          else
            TimeDateStamp = RtlReadULongFromUser(&v11->FileHeader.TimeDateStamp);
          HIDWORD(v17) = TimeDateStamp;
          if ( v9 )
            ImageBase = v11->OptionalHeader.ImageBase;
          else
            ImageBase = RtlReadULong64FromUser(&v11->OptionalHeader.ImageBase);
          v20 = ImageBase;
        }
        if ( EtwpHostSiloState != -4812 && (*(_DWORD *)(EtwpHostSiloState + 4812) & 4) != 0 )
          EtwpPsProvTraceImage(a1, v15, 5121LL, 0LL);
        v24[0] = v15;
        v24[1] = 56LL;
        v24[2] = *v6;
        v25 = *a1;
        v26 = 0;
        v27 = &EtwpNull;
        v28 = 2LL;
        if ( a2 )
          EtwTraceSiloKernelEvent(*(_QWORD *)(a2 + 1520), (int)v24, 3, 4u, 778, 6297859);
        else
          EtwTraceKernelEvent((int)v24, 3, 4u, 778, 6297859);
      }
    }
  }
}
