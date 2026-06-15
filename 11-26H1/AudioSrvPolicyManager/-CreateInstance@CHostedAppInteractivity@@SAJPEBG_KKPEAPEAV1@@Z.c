/*
 * XREFs of ?CreateInstance@CHostedAppInteractivity@@SAJPEBG_KKPEAPEAV1@@Z @ 0x18001B958
 * Callers:
 *     ?GetHostedAppInteractivity@CPickerHostContext@@AEAAJPEBG_KKPEAPEAVCHostedAppInteractivity@@@Z @ 0x18001C0E8 (-GetHostedAppInteractivity@CPickerHostContext@@AEAAJPEBG_KKPEAPEAVCHostedAppInteractivity@@@Z.c)
 * Callees:
 *     ??$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z @ 0x1800079B4 (--$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x18001BF6C (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ??_GCHostedAppInteractivity@@QEAAPEAXI@Z @ 0x180020470 (--_GCHostedAppInteractivity@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CHostedAppInteractivity::CreateInstance(
        unsigned __int16 *a1,
        __int64 a2,
        int a3,
        struct CHostedAppInteractivity **a4)
{
  HANDLE ProcessHeap; // rax
  struct CHostedAppInteractivity *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct CHostedAppInteractivity *v12; // rbx
  unsigned int v13; // edi
  int v15; // eax
  unsigned int v16; // edx

  ProcessHeap = GetProcessHeap();
  v9 = (struct CHostedAppInteractivity *)HeapAlloc(ProcessHeap, 0, 0x18uLL);
  v12 = v9;
  if ( v9 )
  {
    *(_QWORD *)v9 = 0LL;
    *((_DWORD *)v9 + 2) = -1;
    *((_DWORD *)v9 + 3) = 0;
    *((_DWORD *)v9 + 2) = a3;
    *((_QWORD *)v9 + 2) = a2;
    v15 = _AllocString<CTCoAllocPolicy>(v11, v10, a1, v9);
    v13 = v15;
    if ( v15 >= 0 )
    {
      *a4 = v12;
      return v13;
    }
    CHostedAppInteractivity::`scalar deleting destructor'(v12, v16);
  }
  else
  {
    v13 = -2147024882;
  }
  AudPolicyLogError("CHostedAppInteractivity::CreateInstance", 313, v13);
  return v13;
}
