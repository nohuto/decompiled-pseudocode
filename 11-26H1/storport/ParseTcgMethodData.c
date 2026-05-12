/*
 * XREFs of ParseTcgMethodData @ 0x1401370EC
 * Callers:
 *     TcglibpCallMethod @ 0x140133D2C (TcglibpCallMethod.c)
 * Callees:
 *     WPP_SF_DD @ 0x14006F340 (WPP_SF_DD.c)
 *     WPP_SF_qq @ 0x14006F514 (WPP_SF_qq.c)
 *     TcglibReverseBytes @ 0x1401312C4 (TcglibReverseBytes.c)
 */

__int64 __fastcall ParseTcgMethodData(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  _QWORD *v4; // r10
  unsigned int v5; // ebx
  _QWORD *v8; // rdi
  __int64 v9; // r8
  int v10; // r9d
  PDEVICE_OBJECT v11; // rcx
  unsigned __int16 v12; // dx
  __int64 Source2; // [rsp+50h] [rbp+20h] BYREF

  v4 = *(_QWORD **)(a1 + 72);
  v5 = 0;
  if ( *((_DWORD *)v4 + 2) == 4 && *((_DWORD *)v4 + 3) == 3 )
  {
    v8 = (_QWORD *)v4[2];
    Source2 = a2;
    TcglibReverseBytes((char *)&Source2, 8u);
    v9 = Source2;
    if ( v8[1] == 0x80000000FLL )
    {
      if ( RtlCompareMemory(v8 + 2, &Source2, 8uLL) == 8 )
      {
        v8 = (_QWORD *)*v8;
        Source2 = a3;
        TcglibReverseBytes((char *)&Source2, 8u);
        v9 = Source2;
        if ( v8[1] == 0x80000000FLL )
        {
          if ( RtlCompareMemory(v8 + 2, &Source2, 8uLL) == 8 )
          {
            v4 = (_QWORD *)*v8;
            goto LABEL_8;
          }
          v9 = Source2;
        }
        v11 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
          return (unsigned int)-1073741435;
        v12 = 26;
LABEL_17:
        WPP_SF_qq(
          (__int64)v11->AttachedDevice,
          v12,
          (__int64)&WPP_d27db7d0d3983550ea60457830c64ea4_Traceguids,
          v8[2],
          v9);
        return (unsigned int)-1073741435;
      }
      v9 = Source2;
    }
    v11 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      return (unsigned int)-1073741435;
    v12 = 25;
    goto LABEL_17;
  }
LABEL_8:
  v10 = *((_DWORD *)v4 + 2);
  if ( v10 != 5 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_DD(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x1Bu,
        (__int64)&WPP_d27db7d0d3983550ea60457830c64ea4_Traceguids,
        v10,
        *((_DWORD *)v4 + 3));
    return (unsigned int)-1073741435;
  }
  if ( a4 )
    *a4 = v4;
  return v5;
}
