/*
 * XREFs of RaidAdapterConnectInterrupt @ 0x1400606E4
 * Callers:
 *     RaidAdapterStartMiniport @ 0x140053D94 (RaidAdapterStartMiniport.c)
 * Callees:
 *     WPP_SF_ @ 0x14005BCE8 (WPP_SF_.c)
 *     RaidGetResourceListInterrupt @ 0x14008291C (RaidGetResourceListInterrupt.c)
 *     RaidAdapterConnectMSIInterrupt @ 0x14018404C (RaidAdapterConnectMSIInterrupt.c)
 *     RaidAdapterConnectNonMSIInterrupt @ 0x14018420C (RaidAdapterConnectNonMSIInterrupt.c)
 */

__int64 __fastcall RaidAdapterConnectInterrupt(__int64 a1, __int16 a2)
{
  _QWORD *v3; // rcx
  bool v4; // zf
  __int64 v5; // rdx
  unsigned int ResourceListInterrupt; // edi
  int v7; // r8d
  int v8; // r9d
  PDEVICE_OBJECT v9; // rcx
  unsigned __int16 v10; // dx
  unsigned __int8 v12; // si
  int v13; // eax
  int v14; // edx
  int v15; // [rsp+20h] [rbp-48h]
  char v16; // [rsp+28h] [rbp-40h]
  int v17; // [rsp+40h] [rbp-28h] BYREF
  _OWORD v18[2]; // [rsp+48h] [rbp-20h] BYREF
  unsigned __int8 v19; // [rsp+90h] [rbp+28h] BYREF
  char v20; // [rsp+98h] [rbp+30h] BYREF
  unsigned __int8 v21; // [rsp+A0h] [rbp+38h] BYREF
  int v22; // [rsp+A8h] [rbp+40h] BYREF

  v21 = 0;
  v3 = (_QWORD *)(a1 + 360);
  v22 = 0;
  v17 = 0;
  v18[0] = 0LL;
  v20 = 0;
  v4 = *v3 == 0LL;
  v19 = 0;
  if ( !v4 && *(_QWORD *)(a1 + 368) )
  {
    LOBYTE(a2) = *(_BYTE *)(a1 + 4432);
    ResourceListInterrupt = RaidGetResourceListInterrupt(
                              (_DWORD)v3,
                              a2,
                              (unsigned int)&v22,
                              (unsigned int)&v21,
                              (__int64)&v17,
                              (__int64)&v20,
                              (__int64)v18,
                              (__int64)&v19);
    if ( (ResourceListInterrupt & 0x80000000) == 0 )
    {
      if ( *(_BYTE *)(a1 + 4432) )
      {
        v12 = v19;
        LOBYTE(v5) = v19;
        v13 = RaidAdapterConnectMSIInterrupt(a1, v5);
      }
      else
      {
        v12 = v21;
        v14 = v22;
        LOBYTE(v8) = v21;
        LOBYTE(v7) = v21;
        v16 = v20;
        *(_BYTE *)(a1 + 4433) = 0;
        v13 = RaidAdapterConnectNonMSIInterrupt(a1, v14, v7, v8, v15, v16, (__int64)v18);
      }
      ResourceListInterrupt = v13;
      if ( v13 >= 0 )
      {
        *(_DWORD *)(a1 + 872) = v12;
        return ResourceListInterrupt;
      }
      v9 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        return ResourceListInterrupt;
      }
      v10 = 21;
    }
    else
    {
      v9 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        return ResourceListInterrupt;
      }
      v10 = 20;
    }
    WPP_SF_((__int64)v9->AttachedDevice, v10, (__int64)&WPP_2b772e7f1b7c3ebf6aeeae420fec8777_Traceguids);
    return ResourceListInterrupt;
  }
  return 0LL;
}
