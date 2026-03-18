/*
 * XREFs of IoctlStorageStreamsGetParameters @ 0x14001C844
 * Callers:
 *     IoctlToNVMe @ 0x1400104F0 (IoctlToNVMe.c)
 * Callees:
 *     GetSrbDataBuffer @ 0x14000F230 (GetSrbDataBuffer.c)
 *     NVMeInitStreams @ 0x1400182D4 (NVMeInitStreams.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x14002533C (NVMeDirectiveStreamsReturnParameters.c)
 *     __security_check_cookie @ 0x140032530 (__security_check_cookie.c)
 */

__int64 __fastcall IoctlStorageStreamsGetParameters(__int64 a1, __int64 a2)
{
  bool v3; // zf
  int v5; // r12d
  unsigned __int8 v6; // r8
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // r8
  unsigned __int16 v10; // r9
  unsigned int v11; // r10d
  __int64 SrbDataBuffer; // r14
  unsigned int inited; // ebp
  __int16 v14; // ax
  int v15; // r13d
  int v16; // ecx
  int v17; // eax
  int v18; // eax
  int v19; // ecx
  _DWORD *v21; // [rsp+D8h] [rbp-70h] BYREF
  __int128 v22; // [rsp+E0h] [rbp-68h] BYREF
  __int128 v23; // [rsp+F0h] [rbp-58h]

  v3 = *(_BYTE *)(a2 + 2) == 40;
  v21 = 0LL;
  v5 = 0;
  if ( v3 )
    v6 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
  else
    v6 = *(_BYTE *)(a2 + 7);
  v7 = v6;
  v8 = *(_QWORD *)(a1 + 8LL * v6 + 1672);
  if ( v6 == 255 || !v8 )
  {
    *(_BYTE *)(a2 + 3) = 32;
    inited = -1056964602;
    SrbDataBuffer = 0LL;
    if ( v6 == 255 )
      goto LABEL_29;
    goto LABEL_27;
  }
  SrbDataBuffer = GetSrbDataBuffer(a2, &v21);
  if ( *v21 >= 0x4Cu )
  {
    if ( *(_DWORD *)(SrbDataBuffer + 28) == 1 )
    {
      if ( (*(_BYTE *)(a1 + 3728) & 7) == 3 && *(_BYTE *)(a1 + 3729) == (_BYTE)v9 && *(_WORD *)(a1 + 3732) > v10 )
      {
        v22 = 0LL;
        v23 = 0LL;
        inited = NVMeDirectiveStreamsReturnParameters(a1, v11, v9, &v22);
        if ( inited )
        {
          inited = 0;
          *(_WORD *)(a1 + 3734) = -1;
          v14 = -1;
        }
        else
        {
          v14 = WORD1(v22) + WORD3(v23);
          *(_WORD *)(a1 + 3734) = WORD4(v23);
        }
        *(_WORD *)(a1 + 3736) = v14;
      }
      else
      {
        inited = NVMeInitStreams(a1, v9);
      }
      v15 = *(_DWORD *)(v8 + 52);
      if ( inited )
      {
        *(_BYTE *)(a2 + 3) = 4;
      }
      else
      {
        v5 = 48;
        *(_OWORD *)(SrbDataBuffer + 28) = 0LL;
        *(_OWORD *)(SrbDataBuffer + 44) = 0LL;
        *(_OWORD *)(SrbDataBuffer + 60) = 0LL;
        *(_DWORD *)(SrbDataBuffer + 28) = 1;
        *(_DWORD *)(SrbDataBuffer + 32) = 48;
        *(_DWORD *)(SrbDataBuffer + 36) = v15;
        v16 = *(_DWORD *)(a1 + 3740) * v15;
        *(_DWORD *)(SrbDataBuffer + 40) = v16;
        *(_DWORD *)(SrbDataBuffer + 44) = *(_DWORD *)(a1 + 3744) * v16;
        v17 = *(unsigned __int16 *)(a1 + 3732);
        *(_DWORD *)(SrbDataBuffer + 72) = v17;
        *(_DWORD *)(SrbDataBuffer + 52) = v17;
        *(_DWORD *)(SrbDataBuffer + 48) = 1;
        *(_DWORD *)(SrbDataBuffer + 56) = v16;
        *(_DWORD *)(SrbDataBuffer + 60) = *(unsigned __int16 *)(a1 + 3732);
        v18 = -1;
        v19 = *(unsigned __int16 *)(a1 + 3734);
        if ( (_WORD)v19 == 0xFFFF )
          v19 = -1;
        *(_DWORD *)(SrbDataBuffer + 68) = v19;
        if ( *(_WORD *)(a1 + 3736) != 0xFFFF )
          v18 = *(unsigned __int16 *)(a1 + 3736);
        *(_DWORD *)(SrbDataBuffer + 64) = v18;
        *(_BYTE *)(a2 + 3) = 1;
      }
      goto LABEL_27;
    }
    goto LABEL_8;
  }
  if ( *v21 < 0x24u )
  {
LABEL_8:
    *(_BYTE *)(a2 + 3) = 6;
    inited = -1056964602;
    goto LABEL_27;
  }
  *(_DWORD *)(SrbDataBuffer + 28) = 1;
  v5 = 8;
  *(_DWORD *)(SrbDataBuffer + 32) = 48;
  inited = -1056964604;
  *(_BYTE *)(a2 + 3) = 18;
LABEL_27:
  if ( (*(_BYTE *)(a1 + 21) & 8) != 0 )
    StorPortExtendedFunction(87LL, a1, *(_QWORD *)(a1 + 8 * v7 + 1672), 0LL);
LABEL_29:
  *(_DWORD *)(SrbDataBuffer + 24) = v5;
  return inited;
}
