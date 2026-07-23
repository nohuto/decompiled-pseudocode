/*
 * XREFs of PopEtGetProcessVersionInfo @ 0x1409CA0AC
 * Callers:
 *     PopEtGetProcessAppId @ 0x1409C9DD4 (PopEtGetProcessAppId.c)
 * Callees:
 *     PsGetProcessSectionBaseAddress @ 0x1404B6680 (PsGetProcessSectionBaseAddress.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     LdrResSearchResource @ 0x1409E5F50 (LdrResSearchResource.c)
 */

__int64 __fastcall PopEtGetProcessVersionInfo(__int64 a1, __int64 a2)
{
  int v4; // ebx
  __int64 ProcessSectionBaseAddress; // rax
  __int64 v7; // rcx
  void *Src; // [rsp+48h] [rbp-B0h] BYREF
  unsigned __int64 v9; // [rsp+50h] [rbp-A8h] BYREF
  _QWORD v10[3]; // [rsp+58h] [rbp-A0h] BYREF
  _BYTE v11[2]; // [rsp+70h] [rbp-88h] BYREF
  __int16 v12; // [rsp+72h] [rbp-86h]
  __int16 v13; // [rsp+74h] [rbp-84h]
  int v14; // [rsp+A0h] [rbp-58h]
  int v15; // [rsp+A4h] [rbp-54h]

  v4 = 0;
  memset_0(v11, 0, 0x5CuLL);
  *(_QWORD *)a2 = 0LL;
  if ( (*(_DWORD *)(a1 + 1532) & 1) != 0 )
  {
    v7 = PopEtGlobals;
    *(_DWORD *)a2 = *(_DWORD *)(PopEtGlobals + 1064);
    *(_DWORD *)(a2 + 4) = *(_DWORD *)(v7 + 1068);
  }
  else
  {
    ProcessSectionBaseAddress = PsGetProcessSectionBaseAddress(a1);
    if ( ProcessSectionBaseAddress )
    {
      v10[0] = 16LL;
      v10[1] = 1LL;
      v10[2] = 0LL;
      v9 = 0LL;
      Src = 0LL;
      v4 = LdrResSearchResource(
             ProcessSectionBaseAddress,
             (unsigned int)v10,
             3,
             48,
             (__int64)&Src,
             (__int64)&v9,
             0LL,
             0LL);
      if ( v4 >= 0 )
      {
        RtlCopyFromUser(v11, Src, 0x5CuLL);
        if ( v9 < 0x5C || v13 || v12 != 52 )
        {
          return (unsigned int)-1073741811;
        }
        else
        {
          *(_DWORD *)a2 = v15;
          *(_DWORD *)(a2 + 4) = v14;
        }
      }
    }
  }
  return (unsigned int)v4;
}
