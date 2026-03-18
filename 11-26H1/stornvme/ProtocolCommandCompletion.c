/*
 * XREFs of ProtocolCommandCompletion @ 0x140020940
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x140003A40 (GetSrbExtension.c)
 *     ProcessCommand @ 0x14000A680 (ProcessCommand.c)
 *     BuildGetLogPageCommand @ 0x14000F760 (BuildGetLogPageCommand.c)
 *     NVMeAllocateDmaBufferEx @ 0x14001098C (NVMeAllocateDmaBufferEx.c)
 */

__int64 __fastcall ProtocolCommandCompletion(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  _DWORD *v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbp
  _QWORD *v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rbx
  unsigned int v13; // r8d
  _OWORD *v14; // rdx
  unsigned __int8 v15; // cl
  int v16; // ecx
  unsigned __int64 v17; // rbx
  _OWORD *v18; // [rsp+80h] [rbp+18h] BYREF
  unsigned __int64 v19; // [rsp+88h] [rbp+20h] BYREF

  result = GetSrbExtension(a2);
  v9 = result;
  if ( !v7 )
  {
    *(_BYTE *)(a2 + 3) = 4;
    goto LABEL_21;
  }
  v10 = (_QWORD *)(result + 4176);
  v11 = 64LL;
  if ( *(_BYTE *)(a2 + 2) != 40 )
    v11 = 24LL;
  v12 = *(_QWORD *)(v11 + a2);
  *(_DWORD *)(v12 + 64) = *v7;
  *(_DWORD *)(v12 + 68) = v7[1];
  result = *(unsigned int *)(a1 + 56);
  if ( (result & 8) != 0 || !*v10 )
  {
    *(_DWORD *)v10 = 0;
  }
  else
  {
    result = StorPortExtendedFunction(1LL, a1, *v10, v8);
    *v10 = 0LL;
  }
  if ( *(_BYTE *)(a2 + 3) == 1 )
  {
    *(_QWORD *)(v12 + 16) = 1LL;
LABEL_21:
    *(_BYTE *)(v9 + 4225) |= 8u;
    return result;
  }
  *(_DWORD *)(v12 + 16) = 2;
  result = *(unsigned __int16 *)(a3 + 14);
  *(_DWORD *)(v12 + 20) = result;
  *(_BYTE *)(a2 + 3) = 1;
  if ( !*(_DWORD *)(v12 + 28) )
    goto LABEL_21;
  v18 = 0LL;
  v19 = 0LL;
  result = NVMeAllocateDmaBufferEx(a1, 0, 1, 0x40u, (__int64 *)&v18, &v19);
  v14 = v18;
  if ( !v18 )
    goto LABEL_21;
  if ( *(_BYTE *)(a2 + 2) == 40 )
    v15 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
  else
    v15 = *(_BYTE *)(a2 + 7);
  if ( (unsigned int)v15 < *(_DWORD *)(a1 + 224) && *(_QWORD *)(a1 + 8LL * v15 + 1672) )
  {
    _mm_lfence();
    v14 = v18;
    v16 = *(_DWORD *)(*(_QWORD *)(a1 + 8LL * v15 + 1672) + 16LL);
  }
  else
  {
    v16 = 0;
  }
  v17 = v19;
  *v14 = 0LL;
  v14[1] = 0LL;
  LOBYTE(v13) = 1;
  v14[2] = 0LL;
  v14[3] = 0LL;
  BuildGetLogPageCommand(a1, v9, v13, 0x40u, v17, v16, 0LL, 0);
  *(_BYTE *)(v9 + 4225) |= 4u;
  *(_QWORD *)(v9 + 4192) = NVMeGetErrorInfoLogPageCompletion;
  *(_QWORD *)(v9 + 4160) = v18;
  *(_QWORD *)(v9 + 4168) = v17;
  *(_DWORD *)(v9 + 4208) = 64;
  return ProcessCommand(a1, a2);
}
