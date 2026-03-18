/*
 * XREFs of ?NotifyChannelClosed@DXGCHANNELENDPOINTPROXY@@QEAAXXZ @ 0x140212D40
 * Callers:
 *     ?NotifyChannelClosed@DXGVMBUSCHANNEL@@QEAAXXZ @ 0x140212F60 (-NotifyChannelClosed@DXGVMBUSCHANNEL@@QEAAXXZ.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?GetUsedEntryCount@HMGRTABLE@@QEAAIXZ @ 0x140083780 (-GetUsedEntryCount@HMGRTABLE@@QEAAIXZ.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?BuildEntryHandle@HMGRTABLE@@QEAAII@Z @ 0x1402E6FB8 (-BuildEntryHandle@HMGRTABLE@@QEAAII@Z.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1402E98A0 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 *     ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x140314280 (-GetEntryType@HMGRTABLE@@QEAA-AW4_HMGRENTRY_TYPE@@I@Z.c)
 */

void __fastcall DXGCHANNELENDPOINTPROXY::NotifyChannelClosed(DXGCHANNELENDPOINTPROXY *this)
{
  _QWORD *v2; // rbx
  unsigned int v3; // esi
  unsigned int v4; // edi
  unsigned int UsedEntryCount; // r15d
  unsigned int EntryType; // r14d
  unsigned int v7; // eax
  unsigned int v8; // r12d
  unsigned int v9; // ecx
  int v10; // r9d
  __int64 v11; // r8
  _BYTE v12[16]; // [rsp+50h] [rbp-28h] BYREF

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 17) + 24LL))(*((_QWORD *)this + 17));
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v12, (DXGCHANNELENDPOINTPROXY *)((char *)this + 72), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v12);
  v2 = (_QWORD *)((char *)this + 40);
  if ( *((_DWORD *)this + 15) != *((_DWORD *)this + 14) )
  {
    v3 = 0;
    v4 = 0;
    UsedEntryCount = HMGRTABLE::GetUsedEntryCount((DXGCHANNELENDPOINTPROXY *)((char *)this + 40));
    if ( UsedEntryCount )
    {
      do
      {
        if ( v4 >= *((_DWORD *)this + 14) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 859;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"Index < m_HandleTable.GetTableSize()",
            859LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        EntryType = HMGRTABLE::GetEntryType((char *)this + 40);
        if ( !EntryType )
          goto LABEL_16;
        v7 = HMGRTABLE::BuildEntryHandle((DXGCHANNELENDPOINTPROXY *)((char *)this + 40), v4);
        v8 = v7;
        v9 = (v7 >> 6) & 0xFFFFFF;
        if ( v9 < *((_DWORD *)this + 14) )
        {
          v10 = *(_DWORD *)(*v2 + 16LL * v9 + 8);
          if ( ((v7 >> 25) & 0x60) == (v10 & 0x60) && (v10 & 0x2000) == 0 && (v10 & 0x1F) != 0 )
          {
            if ( EntryType == (*(_DWORD *)(*v2 + 16LL * v9 + 8) & 0x1F) )
            {
              v11 = *(_QWORD *)(*v2 + 16LL * v9);
              goto LABEL_13;
            }
            WdLogSingleEntry0(2LL);
            WdLogGlobalForLineNumber = 318;
            DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
          }
        }
        v11 = 0LL;
LABEL_13:
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 17) + 16LL))(
               *((_QWORD *)this + 17),
               EntryType,
               v11) )
        {
          HMGRTABLE::FreeHandle((DXGCHANNELENDPOINTPROXY *)((char *)this + 40), v8);
        }
        ++v3;
LABEL_16:
        ++v4;
      }
      while ( v3 < UsedEntryCount );
    }
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v12);
}
