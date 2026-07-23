/*
 * XREFs of ExpGetSystemFlushInformation @ 0x140AFBD40
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x1409A6638 (ExpGetSystemFirmwareTableInformation.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpGetSystemFlushInformation(char *a1, char a2)
{
  int v4; // r8d
  _QWORD *v5; // rcx
  __int64 v7; // rsi
  unsigned int v8; // r13d
  __int64 Pool2; // rax
  unsigned int *v10; // rdi
  __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  unsigned int *i; // rcx
  __int64 v14; // rax
  _QWORD v15[2]; // [rsp+30h] [rbp-78h] BYREF
  _DWORD v16[3]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v17; // [rsp+4Ch] [rbp-5Ch]
  _DWORD Src[2]; // [rsp+58h] [rbp-50h] BYREF
  __int64 v19; // [rsp+60h] [rbp-48h]
  __int128 v20; // [rsp+68h] [rbp-40h]

  v15[0] = a1;
  v20 = 0LL;
  v4 = ((unsigned __int64)KeFeatureBits >> 34) & 4 | 1;
  if ( _bittest64(&KeFeatureBits, 0x23u) )
    v4 = ((unsigned __int64)KeFeatureBits >> 34) & 4 | 3;
  Src[0] = v4;
  Src[1] = KeGetCurrentPrcb()->CFlushSize;
  v19 = 0LL;
  if ( a2 )
    RtlCopyToUser(a1, Src, 0x20uLL);
  else
    RtlCopyVolatileMemory(a1, Src, 0x20uLL);
  if ( !ExpPlatformCapabilitiesCached )
  {
    v7 = 0LL;
    v17 = 0LL;
    LODWORD(v15[0]) = 0;
    v16[0] = 1094930505;
    v16[1] = 1;
    v16[2] = 1414088270;
    if ( (unsigned int)ExpGetSystemFirmwareTableInformation((char *)v16, 0, 0x14u, v15) == -1073741789 )
    {
      v8 = v15[0];
      Pool2 = ExAllocatePool2(0x100uLL);
      v10 = (unsigned int *)Pool2;
      if ( Pool2 )
      {
        *(_DWORD *)Pool2 = 1094930505;
        *(_DWORD *)(Pool2 + 4) = 1;
        *(_DWORD *)(Pool2 + 8) = 1414088270;
        *(_DWORD *)(Pool2 + 12) = v8 - 16;
        if ( (int)ExpGetSystemFirmwareTableInformation((char *)Pool2, 0, v8, v15) >= 0 )
        {
          v11 = v10[5];
          if ( (unsigned int)v11 >= LODWORD(v15[0]) - 16 )
          {
            v12 = (unsigned __int64)v10 + v11 + 16;
            for ( i = v10 + 14; (unsigned __int64)(i + 1) <= v12; i = (unsigned int *)((char *)i + v14) )
            {
              v14 = *((unsigned __int16 *)i + 1);
              if ( (unsigned __int64)i + v14 > v12 || !(_WORD)v14 )
                break;
              if ( *(_WORD *)i == 7 && (unsigned int)v14 >= 0x10 )
              {
                if ( (i[2] & 1) != 0 )
                  v7 = 1LL;
                break;
              }
            }
          }
        }
        ExFreePoolWithTag(v10, 0);
      }
    }
    ExpPlatformFlushCapabilities = v7;
    ExpPlatformCapabilitiesCached = 1;
  }
  v5 = a1 + 8;
  if ( a2 )
    RtlWriteULong64ToUser(v5, ExpPlatformFlushCapabilities);
  else
    *v5 = ExpPlatformFlushCapabilities;
  return 0LL;
}
