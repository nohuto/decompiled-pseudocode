/*
 * XREFs of TopologyBuildFilterTopology @ 0x140041998
 * Callers:
 *     FilterCreateFilterContext @ 0x140030498 (FilterCreateFilterContext.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14001C6E0 (_guard_dispatch_icall.c)
 *     TopologyFixUpFunctionUnits @ 0x14002DF2C (TopologyFixUpFunctionUnits.c)
 *     TopologyCountComponents @ 0x14002E4FC (TopologyCountComponents.c)
 *     TopologyFreeFunctionUnits @ 0x14002E6B4 (TopologyFreeFunctionUnits.c)
 *     PropertyGetAudioLatency @ 0x140031540 (PropertyGetAudioLatency.c)
 *     TopologyProcessExtensionUnit @ 0x1400319F0 (TopologyProcessExtensionUnit.c)
 *     TopologyProcessInputTerminalUnit @ 0x140031AE0 (TopologyProcessInputTerminalUnit.c)
 *     TopologyProcessMIDIElement @ 0x140031BC0 (TopologyProcessMIDIElement.c)
 *     TopologyProcessOutputTerminalUnit @ 0x140031DE0 (TopologyProcessOutputTerminalUnit.c)
 *     TopologyProcessProcessUnit @ 0x140031EE0 (TopologyProcessProcessUnit.c)
 *     TopologyProcessSelectorUnit @ 0x140031FF0 (TopologyProcessSelectorUnit.c)
 *     TopologyProcessFeatureUnit @ 0x14003F120 (TopologyProcessFeatureUnit.c)
 *     TopologyProcessMixerUnit @ 0x140040BE0 (TopologyProcessMixerUnit.c)
 */

__int64 __fastcall TopologyBuildFilterTopology(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 **v4; // r12
  __int64 result; // rax
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // rsi
  unsigned __int64 v11; // rdx
  GUID *Pool2; // rax
  GUID *v13; // rdi
  int v14; // ebx
  GUID *v15; // r11
  int *v16; // rsi
  int *v17; // r14
  __int64 v18; // rdx
  unsigned __int8 *Data4; // rcx
  _DWORD *v20; // r14
  __int64 v21; // rax
  __int64 *v22; // rdi
  __int64 v23; // rax
  int v24; // eax
  unsigned int v25; // edx
  int v26; // r9d
  int v27; // eax
  int v28; // r8d
  int v29; // eax
  int v30; // r14d
  __int64 v31; // rbx
  unsigned __int8 *v32; // rcx
  __int64 v33; // rax
  int v34; // edx
  unsigned int v35; // [rsp+40h] [rbp-20h] BYREF
  int v36; // [rsp+44h] [rbp-1Ch] BYREF
  unsigned int v37; // [rsp+48h] [rbp-18h] BYREF
  unsigned int v38; // [rsp+4Ch] [rbp-14h] BYREF
  GUID *v39; // [rsp+50h] [rbp-10h]
  __int64 v40; // [rsp+58h] [rbp-8h]
  int v42; // [rsp+B0h] [rbp+50h] BYREF
  unsigned int v43; // [rsp+B8h] [rbp+58h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v37 = 0;
  v4 = (__int64 **)(v2 + 80);
  v35 = 0;
  v38 = 0;
  v36 = 0;
  v42 = 0;
  v43 = 0;
  result = TopologyFixUpFunctionUnits(v4);
  if ( (int)result >= 0 )
  {
    TopologyCountComponents(v4, &v37, (int *)&v35, (int *)&v38, &v36);
    v7 = v35;
    v9 = v38;
    v10 = v35;
    v8 = ++v37;
    v39 = (GUID *)v37;
    *(_DWORD *)(a2 + 68) = 168;
    v40 = v7;
    v11 = 200 * v7 + 16 * (v8 + v9);
    if ( v11 > 0xFFFFFFFF )
      return 3221225858LL;
    Pool2 = (GUID *)ExAllocatePool2(64LL, (unsigned int)v11, 1096972357LL);
    v13 = Pool2;
    if ( !Pool2 )
      return 3221225626LL;
    v38 = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), Pool2, ExFreePool);
    v14 = v38;
    if ( (v38 & 0x80000000) != 0 )
    {
      ExFreePool(v13);
      return (unsigned int)v14;
    }
    v15 = &v13[(_QWORD)v39];
    v16 = (int *)v15 + 42 * v10;
    v39 = v15;
    v17 = &v16[4 * v9];
    *(_QWORD *)(a2 + 56) = v13;
    *(_QWORD *)(a2 + 72) = v15;
    *(_QWORD *)(a2 + 88) = v16;
    if ( (_DWORD)v7 )
    {
      v18 = v7;
      Data4 = v15[6].Data4;
      do
      {
        *((_QWORD *)Data4 - 12) = v17;
        v20 = v17 + 4;
        *((_DWORD *)Data4 - 5) = -1;
        *((_QWORD *)Data4 - 11) = v20;
        v17 = v20 + 4;
        *(_DWORD *)Data4 = -1;
        *((_QWORD *)Data4 - 13) = Data4 - 80;
        Data4 += 168;
        --v18;
      }
      while ( v18 );
      LODWORD(v7) = v35;
    }
    v21 = 1LL;
    *v13 = KSCATEGORY_AUDIO;
    if ( (v36 & 1) != 0 )
    {
      v21 = 2LL;
      v13[1] = KSCATEGORY_RENDER;
    }
    if ( (v36 & 2) != 0 )
      v13[v21] = KSCATEGORY_CAPTURE;
    *(_DWORD *)(a2 + 48) = v37;
    v22 = *v4;
    if ( *v4 != (__int64 *)v4 )
    {
      do
      {
        if ( v14 < 0 )
          goto LABEL_24;
        v23 = *((unsigned int *)v22 + 5);
        if ( (unsigned int)v23 >= 9 )
        {
          v14 = -1073741637;
        }
        else
        {
          v24 = pUnitProcessRtn[v23](a1, (int)v22, (int)v15, (int)v16, (__int64)&v42, (__int64)&v43);
          v15 = v39;
          v14 = v24;
          if ( v24 >= 0 )
            v22 = (__int64 *)*v22;
        }
      }
      while ( v22 != (__int64 *)v4 );
      v38 = v14;
      if ( v14 < 0 )
      {
LABEL_24:
        TopologyFreeFunctionUnits(a1);
        return (unsigned int)v14;
      }
    }
    v25 = v43;
    v26 = 0;
    *(_DWORD *)(a2 + 64) = v42;
    *(_DWORD *)(a2 + 80) = v25;
    if ( !v25 )
    {
LABEL_37:
      if ( (_DWORD)v7 )
      {
        v31 = v40;
        v32 = v15[1].Data4;
        do
        {
          v33 = 2LL * *((unsigned int *)v32 + 13);
          v34 = dword_14001E6B0[4 * *((unsigned int *)v32 + 13)];
          if ( v34 )
          {
            *(_DWORD *)v32 = v34;
            *((_QWORD *)v32 + 1) = (&off_14001E6B8)[v33];
            *((_DWORD *)v32 + 1) = 72;
          }
          v32 += 168;
          --v31;
        }
        while ( v31 );
        return v38;
      }
      return (unsigned int)v14;
    }
    while ( 1 )
    {
      v27 = *v16;
      if ( *v16 != -1 )
      {
        if ( v27 < 0 )
        {
          *v16 = v27 & 0x7FFFFFFF;
LABEL_35:
          v25 = v43;
          goto LABEL_36;
        }
        v42 = v7;
        if ( (_DWORD)v7 )
        {
          v28 = v7 - 1;
          v29 = v7;
          while ( 1 )
          {
            v30 = v28;
            if ( *v16 == *(&v15[5].Data1 + 42 * (unsigned int)(v29 - 1)) )
              break;
            v42 = v28;
            v29 = v28--;
            if ( !v30 )
              goto LABEL_36;
          }
          *v16 = v29 - 1;
          goto LABEL_35;
        }
      }
LABEL_36:
      v16 += 4;
      if ( ++v26 >= v25 )
        goto LABEL_37;
    }
  }
  return result;
}
