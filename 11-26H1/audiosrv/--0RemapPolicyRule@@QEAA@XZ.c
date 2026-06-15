/*
 * XREFs of ??0RemapPolicyRule@@QEAA@XZ @ 0x180129404
 * Callers:
 *     ??$MakeAndInitialize@VCommunicationsRemapPolicyRule@@UIPolicyRule@@AEAPEAUIAudioProcess@@AEAPEAU_DynamicRoutingRule@@@Details@WRL@Microsoft@@YAJPEAPEAUIPolicyRule@@AEAPEAUIAudioProcess@@AEAPEAU_DynamicRoutingRule@@@Z @ 0x180129074 (--$MakeAndInitialize@VCommunicationsRemapPolicyRule@@UIPolicyRule@@AEAPEAUIAudioProcess@@AEAPEAU.c)
 *     ??$MakeAndInitialize@VRemapPolicyRule@@UIPolicyRule@@AEAPEAUIAudioProcess@@AEAPEAU_DynamicRoutingRule@@@Details@WRL@Microsoft@@YAJPEAPEAUIPolicyRule@@AEAPEAUIAudioProcess@@AEAPEAU_DynamicRoutingRule@@@Z @ 0x180129154 (--$MakeAndInitialize@VRemapPolicyRule@@UIPolicyRule@@AEAPEAUIAudioProcess@@AEAPEAU_DynamicRoutin.c)
 * Callees:
 *     ??0PolicyRule@@QEAA@XZ @ 0x180129388 (--0PolicyRule@@QEAA@XZ.c)
 */

RemapPolicyRule *__fastcall RemapPolicyRule::RemapPolicyRule(RemapPolicyRule *this)
{
  PolicyRule::PolicyRule(this);
  *(_QWORD *)this = &RemapPolicyRule::`vftable';
  return this;
}
