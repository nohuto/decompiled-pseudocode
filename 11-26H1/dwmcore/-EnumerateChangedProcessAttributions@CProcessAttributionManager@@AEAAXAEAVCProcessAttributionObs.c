/*
 * XREFs of ?EnumerateChangedProcessAttributions@CProcessAttributionManager@@AEAAXAEAVCProcessAttributionObserver@@PEAXV?$function@$$A6AXPEAXK_KPEBGW4ProcessAttributionFlags@@AEBUProcessAttributionResourceCounters@@@Z@std@@@Z @ 0x1801151A0
 * Callers:
 *     ?SendReportToE3@CEnergyReporter@@AEAAXXZ @ 0x180114CCC (-SendReportToE3@CEnergyReporter@@AEAAXXZ.c)
 *     ?Report@CProcessAttributionReporter@@QEAAXXZ @ 0x180114E78 (-Report@CProcessAttributionReporter@@QEAAXXZ.c)
 *     ?ForEachChangedProcessAttribution@CProcessAttributionObserver@@QEAAXPEAXV?$function@$$A6AXPEAXK_KPEBGW4ProcessAttributionFlags@@AEBUProcessAttributionResourceCounters@@@Z@std@@@Z @ 0x180115104 (-ForEachChangedProcessAttribution@CProcessAttributionObserver@@QEAAXPEAXV-$function@$$A6AXPEAXK_.c)
 * Callees:
 *     ??$_Copy_memmove@PEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@@std@@YAPEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@00@Z @ 0x18000A70C (--$_Copy_memmove@PEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@@std@@YAP.c)
 *     ??_GRecord@CProcessAttributionManager@@QEAAPEAXI@Z @ 0x1801C4828 (--_GRecord@CProcessAttributionManager@@QEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CProcessAttributionManager::EnumerateChangedProcessAttributions(
        CProcessAttributionManager::Record ***a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r15
  __int64 result; // rax
  __int64 v7; // rdx
  CProcessAttributionManager::Record **v8; // rbx
  _QWORD *v9; // rdi
  CProcessAttributionManager::Record *v10; // rcx
  _DWORD *v11; // r15
  __int64 v12; // r12
  _DWORD *v13; // r13
  int v14; // eax
  int v15; // ebp
  int v16; // ebp
  int v17; // r9d
  int v18; // r14d
  int v19; // ecx
  bool v20; // zf
  int v21; // eax
  unsigned int v22; // ecx
  CProcessAttributionManager::Record *v23; // rcx
  _BYTE *v24; // r13
  CProcessAttributionManager::Record *v25; // rcx
  _QWORD *v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rsi
  __int64 v29; // rcx
  int v30; // esi
  CProcessAttributionManager::Record ***v31; // rsi
  bool v32; // [rsp+40h] [rbp-108h]
  bool v33; // [rsp+41h] [rbp-107h]
  bool v34; // [rsp+42h] [rbp-106h]
  bool v35; // [rsp+43h] [rbp-105h]
  char v36; // [rsp+44h] [rbp-104h]
  int v37; // [rsp+48h] [rbp-100h] BYREF
  int v38; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v39; // [rsp+58h] [rbp-F0h]
  _QWORD *v40; // [rsp+60h] [rbp-E8h] BYREF
  __int64 v41; // [rsp+68h] [rbp-E0h]
  __int64 v42; // [rsp+70h] [rbp-D8h]
  __int64 v43; // [rsp+78h] [rbp-D0h] BYREF
  __int64 v44; // [rsp+80h] [rbp-C8h] BYREF
  CProcessAttributionManager::Record ***v45; // [rsp+88h] [rbp-C0h]
  _BYTE v46[96]; // [rsp+90h] [rbp-B8h] BYREF

  v42 = a3;
  v4 = a2;
  v39 = a2;
  v45 = a1;
  v41 = a4;
  result = (__int64)memset_0(v46, 0, 0x54uLL);
  v8 = *a1;
  v9 = *(_QWORD **)(v4 + 16);
  while ( v9 != *(_QWORD **)(v4 + 24) )
  {
    v10 = *v8;
    v11 = (_DWORD *)*v9;
    v12 = *(_QWORD *)*v8;
    v13 = (_DWORD *)*((_QWORD *)*v8 + 14);
    if ( *(_QWORD *)*v9 == v12 )
    {
      v14 = *((_DWORD *)v10 + 30);
      v15 = v11[2];
      v40 = v9 + 1;
      v38 = v14;
      v36 = 0;
      v37 = v15;
      if ( v13 )
      {
        v32 = v11[3] != v13[7];
        v16 = v11[6];
        v17 = v13[10];
        v33 = v11[4] != v13[8];
        v18 = v13[6];
        v9 = v40;
        v34 = v11[5] != v13[9];
        *(_OWORD *)(v11 + 2) = *(_OWORD *)(v13 + 6);
        v35 = v16 != v17;
        v11[6] = v13[10];
        v4 = v39;
        v19 = 0;
        v20 = v37 == v18;
      }
      else
      {
        v30 = *((_DWORD *)v10 + 2);
        v32 = v11[3] != *((_DWORD *)v10 + 3);
        v33 = v11[4] != *((_DWORD *)v10 + 4);
        v36 = 1;
        v34 = v11[5] != *((_DWORD *)v10 + 5);
        v35 = v11[6] != *((_DWORD *)v10 + 6);
        operator delete(v11, 0x70uLL);
        v4 = v39;
        std::_Copy_memmove<CProcessAttributionManager::ProcessAttributionRecord * *,CProcessAttributionManager::ProcessAttributionRecord * *>(
          v9 + 1,
          *(_QWORD *)(v39 + 24),
          v9);
        *(_QWORD *)(v4 + 24) -= 8LL;
        v19 = 0;
        --*((_DWORD *)*v8 + 40);
        v20 = v15 == v30;
      }
      LOBYTE(v19) = !v20;
      v21 = v19 | 2;
      if ( !v32 )
        v21 = v19;
      v22 = v21 | 4;
      if ( !v33 )
        v22 = v21;
      v7 = v22 | 8;
      if ( !v34 )
        v7 = v22;
      result = (unsigned int)v7 | 0x10;
      if ( !v35 )
        result = (unsigned int)v7;
      if ( v36 )
        result = (unsigned int)result | 0x20;
      if ( (_DWORD)result )
      {
        if ( v13 )
          v24 = v13 + 11;
        else
          v24 = v46;
        v25 = *v8;
        if ( *((_QWORD *)*v8 + 18) )
        {
          v26 = (_QWORD *)((char *)v25 + 128);
          if ( *((_QWORD *)v25 + 19) > 7uLL )
            v26 = (_QWORD *)*v26;
        }
        else
        {
          v26 = 0LL;
        }
        v37 = result;
        v44 = v42;
        v40 = v26;
        v43 = v12;
        v27 = *(_QWORD *)(v41 + 56);
        if ( !v27 )
        {
          std::_Xbad_function_call();
          __debugbreak();
          JUMPOUT(0x1801154FALL);
        }
        result = (*(__int64 (__fastcall **)(__int64, __int64 *, int *, __int64 *, _QWORD **, int *, _BYTE *))(*(_QWORD *)v27 + 16LL))(
                   v27,
                   &v44,
                   &v38,
                   &v43,
                   &v40,
                   &v37,
                   v24);
      }
      v23 = *v8;
      if ( *((_DWORD *)*v8 + 40) )
      {
        ++v8;
      }
      else
      {
        if ( v23 )
          CProcessAttributionManager::Record::`scalar deleting destructor'(v23, v7);
        v31 = v45;
        result = std::_Copy_memmove<CProcessAttributionManager::ProcessAttributionRecord * *,CProcessAttributionManager::ProcessAttributionRecord * *>(
                   v8 + 1,
                   (__int64)v45[1],
                   v8);
        --v31[1];
      }
    }
    else
    {
      v4 = v39;
      ++v8;
    }
  }
  v28 = v41;
  v29 = *(_QWORD *)(v41 + 56);
  if ( v29 )
  {
    LOBYTE(v7) = v29 != v41;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v29 + 32LL))(v29, v7);
    *(_QWORD *)(v28 + 56) = 0LL;
  }
  return result;
}
