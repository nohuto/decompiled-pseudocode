/*
 * XREFs of VidSchiBlockContextOnPendingFlips @ 0x14002013C
 * Callers:
 *     VidSchiSwitchContextWithCheck @ 0x1400202A8 (VidSchiSwitchContextWithCheck.c)
 *     VidSchiSubmitQueueCommandDirect @ 0x14005555C (VidSchiSubmitQueueCommandDirect.c)
 * Callees:
 *     ?HasOutstandingPresentReferences@VIDMM_GLOBAL_ALLOC_NONPAGED@@QEBA_NXZ @ 0x140008B38 (-HasOutstandingPresentReferences@VIDMM_GLOBAL_ALLOC_NONPAGED@@QEBA_NXZ.c)
 *     McTemplateK0pp_EtwWriteTransfer @ 0x14001BA24 (McTemplateK0pp_EtwWriteTransfer.c)
 */

bool __fastcall VidSchiBlockContextOnPendingFlips(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // r9
  __int64 v3; // rdi
  __int64 v4; // rbx
  int v6; // r11d
  __int64 v7; // rsi
  unsigned int i; // r10d
  VIDMM_GLOBAL_ALLOC_NONPAGED *v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rax

  v1 = *(_QWORD *)(a1 + 88);
  v2 = a1;
  v3 = *(_QWORD *)(v1 + 104);
  v4 = *(_QWORD *)(*(_QWORD *)(v1 + 96) + 24LL);
  if ( *(_BYTE *)(v3 + 212)
    || _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 208), 0, 0)
    || *(_DWORD *)(v4 + 3260)
    || *(_DWORD *)(a1 + 48)
    || (*(_DWORD *)(a1 + 64) & 8) != 0 )
  {
    return 0;
  }
  v6 = *(_DWORD *)(v3 + 1840);
  v7 = *(_QWORD *)(*(_QWORD *)(v4 + 8) + 768LL);
  if ( *(_DWORD *)(a1 + 480) <= 0x10u )
  {
    for ( i = 0; i < *(_DWORD *)(v2 + 480); ++i )
    {
      v9 = *(VIDMM_GLOBAL_ALLOC_NONPAGED **)(*(_QWORD *)(v2 + 8LL * i + 488) + 96LL);
      if ( (*((_DWORD *)v9 + 1) & 2) == 0 )
      {
        if ( v6
          || (v10 = *(_DWORD *)v9, (*(_DWORD *)v9 & 0x20000000) != 0) && v10 < 0
          || (v10 & 0x80000) != 0
          || (v10 & 0x100) != 0 )
        {
          if ( VIDMM_GLOBAL_ALLOC_NONPAGED::HasOutstandingPresentReferences(v9) )
          {
            if ( (byte_14008A201 & 1) != 0 )
            {
              v13 = *(_QWORD *)(v2 + 8LL * i + 488);
              McTemplateK0pp_EtwWriteTransfer(v13, &EventPrimaryAllocationBusy, v12, *(_QWORD *)(v7 + 24), v13);
            }
            if ( *(_BYTE *)(v4 + 7083) && *(_BYTE *)(*(_QWORD *)(v3 + 48) + 2632LL) && !*(_DWORD *)(v3 + 1840) )
            {
              if ( (byte_14008A201 & 1) != 0 )
              {
                v14 = *(_QWORD *)(v3 + 8);
                if ( !v14 )
                  v14 = v3;
                McTemplateK0pp_EtwWriteTransfer(v11, &EventFrontBufferRenderingAllowed, v12, *(_QWORD *)(v4 + 16), v14);
              }
              ++*(_QWORD *)(v4 + 7088);
              return 0;
            }
            return 1;
          }
        }
      }
    }
    return 0;
  }
  return *(_DWORD *)(v4 + 868) != 0;
}
