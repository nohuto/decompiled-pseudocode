/*
 * XREFs of NdisMWriteConfigBlock @ 0x1400E5E20
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NdisMWriteConfigBlock(_QWORD *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v6; // ebp
  __int64 (__fastcall *v8)(__int64, _QWORD, __int64, _QWORD); // rax
  __int64 v9; // rcx
  unsigned int v10; // edi

  v6 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      26,
      134,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)a1);
  }
  v8 = (__int64 (__fastcall *)(__int64, _QWORD, __int64, _QWORD))a1[607];
  if ( v8 && (v9 = a1[609]) != 0 && (a2 = a1[576]) != 0 && (LODWORD(a2) = *(_DWORD *)(a2 + 8) & 5, (_BYTE)a2 == 5) )
    v10 = v8(v9, v6, a3, a4);
  else
    v10 = -1073741637;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      26,
      135,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)a1);
  }
  return v10;
}
