/*
 * XREFs of RootHub_D0Entry @ 0x14002C718
 * Callers:
 *     Controller_WdfEvtDeviceD0Entry @ 0x140037790 (Controller_WdfEvtDeviceD0Entry.c)
 *     Controller_InternalReset @ 0x1400416D0 (Controller_InternalReset.c)
 * Callees:
 *     XilRegister_WriteUlong @ 0x140008FA4 (XilRegister_WriteUlong.c)
 *     XilRegister_ReadUlong @ 0x14000B620 (XilRegister_ReadUlong.c)
 *     RootHub_AcquireReadModifyWriteLock @ 0x14000D648 (RootHub_AcquireReadModifyWriteLock.c)
 *     RootHub_ReleaseReadModifyWriteLock @ 0x14000D784 (RootHub_ReleaseReadModifyWriteLock.c)
 *     WPP_RECORDER_SF_dD @ 0x14002CC88 (WPP_RECORDER_SF_dD.c)
 */

__int64 __fastcall RootHub_D0Entry(__int64 a1)
{
  unsigned int v1; // esi
  __int64 v3; // rbp
  unsigned int v4; // r14d
  unsigned int *v5; // r15
  char Ulong; // al
  __int64 v7; // rbx
  int v8; // edx
  int v10; // r9d
  __int16 v11; // ax

  v1 = 1;
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL);
  *(_BYTE *)(a1 + 57) = 1;
  while ( v1 <= *(_DWORD *)(a1 + 16) )
  {
    v4 = v1 - 1;
    v5 = (unsigned int *)(*(_QWORD *)(a1 + 40) + 16LL * (v1 - 1));
    Ulong = XilRegister_ReadUlong(v3, v5);
    v7 = 120LL * (v1 - 1);
    v8 = *(unsigned __int8 *)(v7 + *(_QWORD *)(a1 + 48) + 13);
    if ( (_BYTE)v8 == 2 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v10 = 31;
        goto LABEL_10;
      }
    }
    else
    {
      if ( (_BYTE)v8 != 3 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v8) = 2;
          WPP_RECORDER_SF_dD(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
            v8,
            11,
            33,
            (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
            v1,
            *(_BYTE *)(v7 + *(_QWORD *)(a1 + 48) + 13));
        }
        goto LABEL_5;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v10 = 32;
LABEL_10:
        LOBYTE(v8) = 4;
        WPP_RECORDER_SF_dD(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          v8,
          11,
          v10,
          (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
          v1,
          Ulong);
      }
    }
    if ( (*(_QWORD *)(*(_QWORD *)(a1 + 8) + 736LL) & 0x20000000LL) != 0
      && (*(_DWORD *)(v7 + *(_QWORD *)(a1 + 48) + 64) & 2) == 0 )
    {
      RootHub_AcquireReadModifyWriteLock(a1, v4);
      v11 = XilRegister_ReadUlong(v3, v5);
      XilRegister_WriteUlong(v3, v5, v11 & 0xC200 | 0xE000000);
      RootHub_ReleaseReadModifyWriteLock(a1, v4);
    }
LABEL_5:
    ++v1;
  }
  return 0LL;
}
