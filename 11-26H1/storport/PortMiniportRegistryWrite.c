/*
 * XREFs of PortMiniportRegistryWrite @ 0x14012F8F0
 * Callers:
 *     StorPortRegistryWrite @ 0x14007C320 (StorPortRegistryWrite.c)
 * Callees:
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

int __fastcall PortMiniportRegistryWrite(__int64 a1, __int64 a2, ULONG a3, __int64 a4)
{
  int result; // eax
  unsigned int v9; // ecx
  _BYTE *ValueData; // rbx
  unsigned int v11; // ebp
  unsigned int v12; // esi
  _WORD *Pool2; // rax
  _WORD *v14; // rdi
  ULONG v15; // esi
  unsigned int v16; // ecx
  _WORD *v17; // rdx
  ULONG ValueLength; // eax

  if ( RtlCheckRegistryKey(0, *(PWSTR *)(a1 + 8)) >= 0
    || (result = RtlCreateRegistryKey(0, *(PWSTR *)(a1 + 8)), result >= 0) )
  {
    v9 = *(_DWORD *)(a4 + 52);
    ValueData = (_BYTE *)(*(_QWORD *)(a4 + 32) + v9);
    if ( a3 == 1 )
    {
      v11 = 2 * *(_DWORD *)(a4 + 44);
      v12 = v11 + 2;
      if ( v11 + 2 < v11 || v9 + v12 < v12 )
        return -1073741675;
      if ( v9 + v12 > *(_DWORD *)(a4 + 40) )
        return -1073741789;
      Pool2 = (_WORD *)ExAllocatePool2(64LL, v12, 1112697936LL);
      v14 = Pool2;
      if ( !Pool2 )
        return -1073741670;
      if ( v12 > 0xFFFF )
      {
        ExFreePoolWithTag(Pool2, 0x42526C50u);
        return -1073741675;
      }
      v15 = 0;
      memset_0(Pool2, 0, (unsigned __int16)v11);
      if ( ValueData )
      {
        v16 = 0;
        v17 = v14;
        do
        {
          if ( !*ValueData )
            break;
          *v17++ = (char)*ValueData++;
          v16 += 2;
          v15 += 2;
        }
        while ( v16 < (unsigned int)(unsigned __int16)v11 - 1 );
      }
      ValueLength = v15 + 2;
      ValueData = v14;
      if ( (unsigned __int16)v11 - v15 < 2 )
        ValueLength = v15;
    }
    else
    {
      ValueLength = 4;
      if ( a3 != 4 )
        ValueLength = *(_DWORD *)(a4 + 44);
    }
    return RtlWriteRegistryValue(0, *(PCWSTR *)(a1 + 8), *(PCWSTR *)(a2 + 8), a3, ValueData, ValueLength);
  }
  return result;
}
