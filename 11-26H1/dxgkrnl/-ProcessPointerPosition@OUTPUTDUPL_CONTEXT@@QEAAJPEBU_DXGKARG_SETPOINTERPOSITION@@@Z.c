/*
 * XREFs of ?ProcessPointerPosition@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1402B0A14
 * Callers:
 *     ?ProcessPointerPositionChange@OUTPUTDUPL_MGR@@QEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1402B0730 (-ProcessPointerPositionChange@OUTPUTDUPL_MGR@@QEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1402B04D0 (-OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z.c)
 *     ?CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z @ 0x1402B05CC (-CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z.c)
 *     ?ProcessUpdateHighLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@@Z @ 0x1402B1274 (-ProcessUpdateHighLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_CONTEXT::ProcessPointerPosition(
        OUTPUTDUPL_CONTEXT *this,
        const struct _DXGKARG_SETPOINTERPOSITION *a2)
{
  int updated; // ebx
  __int64 result; // rax
  __int64 v6; // [rsp+20h] [rbp-88h]
  _QWORD v7[10]; // [rsp+50h] [rbp-58h] BYREF

  if ( *((_DWORD *)this + 80) )
  {
    WdLogNewEntry5_WdTrace(this, a2);
    result = 0LL;
    WdLogGlobalForLineNumber = 2012;
  }
  else
  {
    updated = DXGDXGIKEYEDMUTEX::OpenLocalMutex(*((_QWORD *)this + *((unsigned int *)this + 11) + 6), 2);
    if ( updated < 0 )
    {
      WdLogSingleEntry2(2LL, *((_QWORD *)this + *((unsigned int *)this + 11) + 6), this);
      v6 = *((_QWORD *)this + *((unsigned int *)this + 11) + 6);
      WdLogGlobalForLineNumber = 2019;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to open local mutex of TYPE_OTHER for global mutex 0x%I64x in OUTPUTDUPL_CONTEXT 0x%I64x",
        v6,
        (__int64)this,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      memset(v7, 0, 0x48uLL);
      LODWORD(v7[0]) = 1;
      v7[1] = 0LL;
      v7[3] = 0LL;
      v7[4] = a2;
      LODWORD(v7[2]) = 2;
      updated = OUTPUTDUPL_CONTEXT::ProcessUpdateHighLevel(this, (struct _OUTPUTDUPL_UPDATE_INFO *)v7);
      DXGDXGIKEYEDMUTEX::CloseLocalMutex(*((_QWORD *)this + *((unsigned int *)this + 11) + 6), 2, 0);
    }
    return (unsigned int)updated;
  }
  return result;
}
