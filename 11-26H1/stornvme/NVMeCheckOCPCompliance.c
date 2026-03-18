/*
 * XREFs of NVMeCheckOCPCompliance @ 0x140005D10
 * Callers:
 *     NVMeControllerInitPart3 @ 0x140006E40 (NVMeControllerInitPart3.c)
 * Callees:
 *     NVMeAllocateDmaBuffer @ 0x140005C10 (NVMeAllocateDmaBuffer.c)
 *     ProcessCommand @ 0x14000A680 (ProcessCommand.c)
 *     WaitForCommandComplete @ 0x14000C330 (WaitForCommandComplete.c)
 *     LocalCommandReuse @ 0x14000CA80 (LocalCommandReuse.c)
 *     NVMeFreeDmaBuffer @ 0x14000FA50 (NVMeFreeDmaBuffer.c)
 *     NVMeFreeDmaBufferEx @ 0x140010C58 (NVMeFreeDmaBufferEx.c)
 *     NVMeIceConfigureExclusionAddress @ 0x1400315BC (NVMeIceConfigureExclusionAddress.c)
 */

__int64 __fastcall NVMeCheckOCPCompliance(__int64 a1, unsigned __int8 a2)
{
  __int64 result; // rax
  __int64 v3; // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  unsigned int v8; // eax
  __int64 *v9; // r14
  int v10; // r8d
  __int64 v11; // rcx
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF
  __int64 v13; // [rsp+70h] [rbp+18h] BYREF

  result = (__int64)&retaddr;
  v3 = *(_QWORD *)(a1 + 1104);
  v13 = 0LL;
  if ( !*(_BYTE *)(a1 + 20) )
  {
    result = NVMeAllocateDmaBuffer(a1, 0x200u);
    if ( !(_DWORD)result )
    {
      if ( (*(_DWORD *)(a1 + 4344) & 4) != 0 && (unsigned int)NVMeIceConfigureExclusionAddress(a1, 0, 512, 0, 1, 1) )
      {
        return NVMeFreeDmaBuffer(a1, 512LL, &v13, 0LL);
      }
      else
      {
        result = v13;
        if ( v13 )
        {
          v6 = 4LL;
          do
          {
            *(_OWORD *)result = 0LL;
            *(_OWORD *)(result + 16) = 0LL;
            *(_OWORD *)(result + 32) = 0LL;
            *(_OWORD *)(result + 48) = 0LL;
            *(_OWORD *)(result + 64) = 0LL;
            *(_OWORD *)(result + 80) = 0LL;
            *(_OWORD *)(result + 96) = 0LL;
            result += 128LL;
            *(_OWORD *)(result - 16) = 0LL;
            --v6;
          }
          while ( v6 );
          LocalCommandReuse(a1, a1 + 1008);
          *(_BYTE *)(v3 + 4225) |= 3u;
          *(_WORD *)(v3 + 4212) = 0;
          v7 = *(_QWORD *)(a1 + 1560);
          *(_BYTE *)(v3 + 4136) = -64;
          v8 = *(_DWORD *)(v3 + 4136) & 0xF07F7FFF;
          *(_BYTE *)(v3 + 4096) = 2;
          *(_DWORD *)(v3 + 4100) = -1;
          *(_DWORD *)(v3 + 4136) = v8 | 0x7F0000;
          *(_QWORD *)(v3 + 4120) = 0LL;
          *(_QWORD *)(v3 + 4128) = 0LL;
          *(_WORD *)(v3 + 4142) = 0;
          if ( (*(_BYTE *)(v7 + 261) & 4) != 0 )
          {
            *(_DWORD *)(v3 + 4138) = 127;
            *(_QWORD *)(v3 + 4144) = 0LL;
          }
          *(_BYTE *)(v3 + 4225) |= 4u;
          v9 = (__int64 *)(v3 + 4160);
          *(_QWORD *)(v3 + 4160) = v13;
          *(_QWORD *)(v3 + 4168) = 0LL;
          *(_DWORD *)(v3 + 4208) = 512;
          *(_QWORD *)(v3 + 4192) = 0LL;
          ProcessCommand(a1, a1 + 1016);
          result = WaitForCommandComplete(a1, a1 + 1016, a2);
          if ( *(_BYTE *)(a1 + 1019) == 1 )
          {
            v11 = *v9;
            if ( !*v9 )
              goto LABEL_18;
            result = *(_QWORD *)(v11 + 496) + 0x5B0D4015D7EF503BLL;
            if ( *(_QWORD *)(v11 + 496) == 0xA4F2BFEA2810AFC5uLL )
              result = *(_QWORD *)(v11 + 504) + 0x502AEB368390B064LL;
            if ( result )
            {
LABEL_18:
              *(_DWORD *)(a1 + 12) &= ~1u;
              *(_BYTE *)(a1 + 9) = 0;
            }
            else
            {
              *(_DWORD *)(a1 + 12) |= 1u;
              result = *(unsigned __int8 *)(v11 + 103);
              *(_BYTE *)(a1 + 9) = result;
            }
          }
          if ( *v9 )
          {
            LOBYTE(v10) = 1;
            result = NVMeFreeDmaBufferEx(a1, 0, v10, 512, v3 + 4160, *(_QWORD *)(v3 + 4168));
          }
          *(_BYTE *)(v3 + 4225) |= 8u;
        }
      }
    }
  }
  return result;
}
