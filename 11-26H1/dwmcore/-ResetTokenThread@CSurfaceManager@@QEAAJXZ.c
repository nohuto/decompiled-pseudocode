/*
 * XREFs of ?ResetTokenThread@CSurfaceManager@@QEAAJXZ @ 0x1801CC884
 * Callers:
 *     ?UpdateMmcssPartners@CComposition@@QEAAJXZ @ 0x18002DDAC (-UpdateMmcssPartners@CComposition@@QEAAJXZ.c)
 *     ?ResetTokenThread@CComposition@@QEAAJXZ @ 0x1801CC82C (-ResetTokenThread@CComposition@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CSurfaceManager::ResetTokenThread(CSurfaceManager *this)
{
  signed int v2; // edi
  void *v3; // rcx
  DWORD ThreadId; // ebx
  signed int LastError; // eax

  v2 = 0;
  v3 = (void *)*((_QWORD *)this + 15);
  if ( v3 )
  {
    if ( v3 != (void *)-1LL )
    {
      ThreadId = GetThreadId(v3);
      if ( GetCurrentThreadId() != ThreadId )
      {
        if ( *((_BYTE *)this + 144) )
        {
          return (unsigned int)-2147467260;
        }
        else
        {
          SetLastError(0);
          if ( !SetEvent(*((HANDLE *)this + 16)) )
          {
            LastError = GetLastError();
            v2 = LastError;
            if ( LastError > 0 )
              v2 = (unsigned __int16)LastError | 0x80070000;
            if ( v2 >= 0 )
              v2 = -2003304445;
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v2, 0x61u, 0LL);
          }
        }
      }
    }
  }
  return (unsigned int)v2;
}
