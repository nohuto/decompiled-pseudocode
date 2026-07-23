/*
 * XREFs of CmpCreateExtendedControlSets @ 0x140CF005C
 * Callers:
 *     CmInitSystem1 @ 0x140CEEC2C (CmInitSystem1.c)
 * Callees:
 *     CmpCreateControlSet @ 0x140CEFB34 (CmpCreateControlSet.c)
 *     CmpCreateControlSetOverride @ 0x140CEFEEC (CmpCreateControlSetOverride.c)
 */

__int64 __fastcall CmpCreateExtendedControlSets(__int64 a1)
{
  __int64 result; // rax
  __int64 i; // rbx
  __int64 *v4; // rax
  __int64 j; // rbx

  if ( !HIDWORD(WheapPfaLock.KernelStack)
    || (result = CmpCreateControlSet((__int64)L"DEVICES", 1), (int)(result + 0x80000000) < 0)
    || (_DWORD)result == -1073741772 )
  {
    for ( i = *(_QWORD *)(*(_QWORD *)(a1 + 240) + 312LL); ; i = *(_QWORD *)i )
    {
      v4 = (__int64 *)(*(_QWORD *)(a1 + 240) + 312LL);
      if ( (__int64 *)i == v4 )
        break;
      if ( (*(_DWORD *)(i + 24) & 0x80u) != 0 )
      {
        result = CmpCreateControlSet(*(_QWORD *)(i + 48), 1);
        if ( (int)result < 0 )
          return result;
      }
    }
    if ( HIDWORD(WheapPfaLock.KernelStack) )
    {
      for ( j = *v4; j != *(_QWORD *)(a1 + 240) + 312LL; j = *(_QWORD *)j )
      {
        if ( (*(_DWORD *)(j + 24) & 0x40) != 0 )
        {
          result = CmpCreateControlSetOverride(j);
          if ( (int)result < 0 )
            return result;
        }
      }
    }
    return 0LL;
  }
  return result;
}
