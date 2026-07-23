/*
 * XREFs of SymCryptFdefModAddMulx384Asm @ 0x14056A7B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptFdefModAddMulx384Asm(__int64 a1, __int64 *a2, __int64 _R8, _QWORD *a4)
{
  __int64 *v4; // rcx
  __int64 result; // rax

  v4 = (__int64 *)(a1 + 256);
  _RAX = *a2;
  __asm { adcx    rax, [r8] }
  _R10 = a2[1];
  __asm { adcx    r10, [r8+8] }
  _R11 = a2[2];
  __asm { adcx    r11, [r8+10h] }
  _RSI = a2[3];
  __asm { adcx    rsi, [r8+18h] }
  _RDI = a2[4];
  __asm { adcx    rdi, [r8+20h] }
  _RDX = a2[5];
  __asm { adcx    rdx, [r8+28h] }
  _RBP = *v4;
  __asm { adox    rbp, rax }
  _RBX = v4[1];
  __asm { adox    rbx, r10 }
  _R12 = v4[2];
  __asm { adox    r12, r11 }
  _R13 = v4[3];
  __asm { adox    r13, rsi }
  _R8 = v4[4];
  __asm { adox    r8, rdi }
  _RCX = v4[5];
  __asm { adox    rcx, rdx }
  *a4 = result;
  a4[1] = _R10;
  a4[2] = _R11;
  a4[3] = _RSI;
  a4[4] = _RDI;
  a4[5] = _RDX;
  return result;
}
